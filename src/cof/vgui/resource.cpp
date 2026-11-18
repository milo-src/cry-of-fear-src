#include "resource.h"
#include <cctype>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <sstream>

namespace cof { namespace vgui {
namespace {
bool Equal(const std::string& a, const std::string& b) {
    if (a.size() != b.size()) return false;
    for (std::size_t i = 0; i < a.size(); ++i)
        if (std::tolower(static_cast<unsigned char>(a[i])) !=
            std::tolower(static_cast<unsigned char>(b[i]))) return false;
    return true;
}
struct Token {
    enum Kind { End, Text, Open, Close, Condition, Error } kind = End;
    std::string text;
    std::size_t line = 1;
};
class Parser {
public:
    explicit Parser(const std::string& text) : source(text) {}
    bool Run(KeyValue& root, std::string* error) {
        if (source.size() >= 3 && source.compare(0, 3, "\xEF\xBB\xBF") == 0) pos = 3;
        root = KeyValue();
        root.section = true;
        Next();
        bool ok = Entries(root, false, 0);
        if (error) *error = failure;
        return ok;
    }
private:
    const std::string& source;
    std::size_t pos = 0, line = 1;
    Token token;
    std::string failure;
    bool Fail(const std::string& why) {
        std::ostringstream out;
        out << "line " << line << ": " << why;
        failure = out.str();
        return false;
    }
    void Next() {
        token = Token();
        for (;;) {
            while (pos < source.size() && (std::isspace(static_cast<unsigned char>(source[pos])) || source[pos] == '\0')) {
                if (source[pos++] == '\n') ++line;
            }
            if (source.compare(pos, 2, "//") == 0) {
                while (pos < source.size() && source[pos] != '\n') ++pos;
                continue;
            }
            if (source.compare(pos, 2, "/*") == 0) {
                pos += 2;
                while (pos < source.size() && source.compare(pos, 2, "*/") != 0)
                    if (source[pos++] == '\n') ++line;
                if (pos == source.size()) { token.kind = Token::Error; Fail("unterminated comment"); return; }
                pos += 2;
                continue;
            }
            break;
        }
        token.line = line;
        if (pos == source.size()) return;
        const char ch = source[pos++];
        if (ch == '{') { token.kind = Token::Open; return; }
        if (ch == '}') { token.kind = Token::Close; return; }
        if (ch == '[') {
            token.kind = Token::Condition;
            while (pos < source.size() && source[pos] != ']') token.text += source[pos++];
            if (pos == source.size()) { token.kind = Token::Error; Fail("unterminated condition"); return; }
            ++pos;
            return;
        }
        token.kind = Token::Text;
        if (ch == '"') {
            while (pos < source.size()) {
                char next = source[pos++];
                if (next == '"') return;
                if (next == '\\' && pos < source.size() && (source[pos] == '"' || source[pos] == '\\')) next = source[pos++];
                if (next == '\n') ++line;
                token.text += next;
            }
            token.kind = Token::Error; Fail("unterminated quoted string");
            return;
        }
        token.text += ch;
        while (pos < source.size()) {
            char next = source[pos];
            if (std::isspace(static_cast<unsigned char>(next)) || next == '\0' || next == '{' || next == '}' || next == '[')
                break;
            if (source.compare(pos, 2, "//") == 0 || source.compare(pos, 2, "/*") == 0) break;
            token.text += next;
            ++pos;
        }
    }
    bool Entries(KeyValue& parent, bool nested, unsigned depth) {
        if (depth > 128) return Fail("resource nesting exceeds 128");
        while (token.kind != Token::End && token.kind != Token::Close) {
            if (token.kind == Token::Error) return false;
            if (token.kind != Token::Text) return Fail("expected key");
            KeyValue node;
            node.name = token.text;
            node.line = token.line;
            Next();
            if (token.kind == Token::Open) {
                node.section = true;
                Next();
                if (!Entries(node, true, depth + 1)) return false;
            } else if (token.kind == Token::Text) {
                node.value = token.text;
                Next();
            } else return token.kind == Token::Error ? false : Fail("expected value or section after " + node.name);
            if (token.kind == Token::Condition) { node.condition = token.text; Next(); }
            parent.children.push_back(node);
        }
        if (nested) {
            if (token.kind != Token::Close) return Fail("unterminated section");
            Next();
        } else if (token.kind == Token::Close) return Fail("unexpected closing brace");
        return true;
    }
};
void AppendUTF8(std::string& out, unsigned value) {
    if (value < 0x80) out += static_cast<char>(value);
    else if (value < 0x800) {
        out += static_cast<char>(0xC0 | (value >> 6));
        out += static_cast<char>(0x80 | (value & 63));
    } else if (value < 0x10000) {
        out += static_cast<char>(0xE0 | (value >> 12));
        out += static_cast<char>(0x80 | ((value >> 6) & 63));
        out += static_cast<char>(0x80 | (value & 63));
    } else {
        out += static_cast<char>(0xF0 | (value >> 18));
        out += static_cast<char>(0x80 | ((value >> 12) & 63));
        out += static_cast<char>(0x80 | ((value >> 6) & 63));
        out += static_cast<char>(0x80 | (value & 63));
    }
}
bool ColorLiteral(const std::string& value, RGBA& color) {
    int r, g, b, a = 255;
    std::istringstream input(value);
    if (!(input >> r >> g >> b)) return false;
    input >> std::ws;
    if (!input.eof()) {
        if (!(input >> a)) return false;
        input >> std::ws;
        if (!input.eof()) return false;
    }
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255 || a < 0 || a > 255)
        return false;
    color = RGBA(r, g, b, a);
    return true;
}
}

const KeyValue* KeyValue::Find(const std::string& key) const {
    for (const KeyValue& child : children) if (Equal(child.name, key)) return &child;
    return nullptr;
}
const KeyValue* KeyValue::FindPath(const std::string& path) const {
    if (const KeyValue* exact = Find(path)) return exact;
    std::size_t split = path.find_first_of("./");
    if (split == std::string::npos) return nullptr;
    const KeyValue* parent = Find(path.substr(0, split));
    return parent ? parent->FindPath(path.substr(split + 1)) : nullptr;
}
std::string KeyValue::Get(const std::string& key, const std::string& fallback) const {
    const KeyValue* found = Find(key);
    return found && !found->section ? found->value : fallback;
}
int KeyValue::Int(const std::string& key, int fallback) const {
    const std::string value = Get(key);
    char* end;
    long number = std::strtol(value.c_str(), &end, 10);
    return end != value.c_str() && !*end && number >= INT_MIN && number <= INT_MAX ? static_cast<int>(number) : fallback;
}
float KeyValue::Float(const std::string& key, float fallback) const {
    const std::string value = Get(key);
    char* end;
    double number = std::strtod(value.c_str(), &end);
    return end != value.c_str() && !*end ? static_cast<float>(number) : fallback;
}
bool ParseKeyValues(const std::string& text, KeyValue& root, std::string* error) {
    const std::size_t zero = text.find('\0');
    if (zero != std::string::npos) {
        const std::string bounded = text.substr(0, zero);
        return Parser(bounded).Run(root, error);
    }
    return Parser(text).Run(root, error);
}
bool DecodeResource(const unsigned char* bytes, std::size_t size, std::string& utf8, std::string* error) {
    utf8.clear();
    if (error) error->clear();
    if (!bytes && size) { if (error) *error = "null resource buffer"; return false; }
    if (!size) return true;
    bool little = size >= 2 && bytes[0] == 0xFF && bytes[1] == 0xFE;
    bool big = size >= 2 && bytes[0] == 0xFE && bytes[1] == 0xFF;
    if (!little && !big) {
        std::size_t skip = size >= 3 && bytes[0] == 0xEF && bytes[1] == 0xBB && bytes[2] == 0xBF ? 3 : 0;
        utf8.assign(reinterpret_cast<const char*>(bytes + skip), size - skip);
        return true;
    }
    if (size % 2) { if (error) *error = "odd UTF-16 resource length"; return false; }
    for (std::size_t i = 2; i < size; i += 2) {
        unsigned value = little ? bytes[i] | unsigned(bytes[i+1]) << 8 : unsigned(bytes[i]) << 8 | bytes[i+1];
        if (value >= 0xD800 && value <= 0xDBFF) {
            if (i + 3 >= size) { if (error) *error = "truncated UTF-16 surrogate"; return false; }
            i += 2;
            unsigned low = little ? bytes[i] | unsigned(bytes[i+1]) << 8 : unsigned(bytes[i]) << 8 | bytes[i+1];
            if (low < 0xDC00 || low > 0xDFFF) { if (error) *error = "invalid UTF-16 surrogate"; return false; }
            value = 0x10000 + ((value - 0xD800) << 10) + low - 0xDC00;
        } else if (value >= 0xDC00 && value <= 0xDFFF) {
            if (error) *error = "unpaired UTF-16 surrogate";
            return false;
        }
        AppendUTF8(utf8, value);
    }
    return true;
}
const KeyValue& ResourceBody(const KeyValue& root) {
    if (root.name.empty() && root.children.size() == 1 && root.children[0].section) return root.children[0];
    return root;
}
Scheme::Scheme(const KeyValue& primary, const KeyValue* fallback)
    : primary_(&ResourceBody(primary)), fallback_(fallback ? &ResourceBody(*fallback) : nullptr) {}
const KeyValue* Scheme::InSection(const char* section, const std::string& key) const {
    const KeyValue* sources[] = { primary_, fallback_ };
    for (const KeyValue* source : sources) {
        if (!source) continue;
        const KeyValue* group = source->Find(section);
        if (group) if (const KeyValue* found = group->FindPath(key)) return found;
    }
    return nullptr;
}
const KeyValue* Scheme::FindSetting(const std::string& path) const {
    return InSection("BaseSettings", path);
}
RGBA Scheme::Color(const std::string& key, RGBA fallback) const {
    std::string current = key;
    for (int depth = 0; depth < 32; ++depth) {
        RGBA result;
        if (ColorLiteral(current, result)) return result;
        const KeyValue* node = InSection("Colors", current);
        if (!node) node = FindSetting(current);
        if (!node || node->section) return fallback;
        current = node->value;
    }
    return fallback;
}
const KeyValue* Scheme::Font(const std::string& name) const { return InSection("Fonts", name); }
const KeyValue* Scheme::Border(const std::string& name) const {
    std::string current = name;
    for (int depth = 0; depth < 32; ++depth) {
        const KeyValue* found = InSection("Borders", current);
        if (!found) return nullptr;
        if (found->section) return found;
        current = found->value;
    }
    return nullptr;
}
} }
