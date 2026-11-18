#pragma once
#include <string>
#include <map>
namespace cof {
using Descriptor = std::map<std::string, std::string>;

// Bounded replacement for the original token parser (0x1004dbf0/0x100dff70).
// Keep CP1251 display bytes intact; identifiers and resource paths are ASCII.
inline bool Token(const std::string& data, size_t& pos, std::string& token) {
    token.clear();
    while (pos < data.size()) {
        unsigned char ch = data[pos];
        if (ch <= ' ') { ++pos; continue; }
        if (data.compare(pos, 2, "//") == 0) {
            while (pos < data.size() && data[pos] != '\n') ++pos;
            continue;
        }
        break;
    }
    if (pos == data.size()) return false;
    char ch = data[pos++];
    if (ch == '"') {
        while (pos < data.size() && data[pos] != '"') token += data[pos++];
        if (pos == data.size()) { ++pos; return false; } // error, not clean EOF
        ++pos;
    } else if (ch == '{' || ch == '}') token += ch;
    else {
        token += ch;
        while (pos < data.size() && static_cast<unsigned char>(data[pos]) > ' ' &&
               data[pos] != '{' && data[pos] != '}') token += data[pos++];
    }
    if (token.size() > 4096) { pos = data.size() + 1; return false; }
    return true;
}

inline bool ParseDescriptor(const std::string& data, Descriptor& result) {
    result.clear();
    size_t pos = 0;
    std::string section, brace, key, value, end;
    while (Token(data, pos, section)) {
        if (!Token(data, pos, brace) || brace != "{" ||
            !Token(data, pos, key) || key != "data" ||
            !Token(data, pos, value) || !Token(data, pos, end) || end != "}" ||
            result.count(section)) return false;
        result[section] = value;
    }
    return pos == data.size() && !result.empty();
}


inline bool ValidDescriptorPath(const std::string& name) {
    return name.compare(0, 15, "inventoryitems/") == 0 && name.size() <= 127 &&
        name.find("..") == std::string::npos && name.find('\\') == std::string::npos &&
        name.size() >= 19 && name.substr(name.size() - 4) == ".txt";
}
}
