#ifndef COF_VGUI_RESOURCE_H
#define COF_VGUI_RESOURCE_H

#include <cstddef>
#include <string>
#include <vector>

namespace cof { namespace vgui {

// Ordered and duplicate-preserving. Layout values remain strings: c/r-prefixed
// positions, localization tokens and proportional coordinates need UI context.
struct KeyValue {
    std::string name;
    std::string value;
    std::string condition;
    std::vector<KeyValue> children;
    std::size_t line = 1;
    bool section = false;

    const KeyValue* Find(const std::string& key) const;
    const KeyValue* FindPath(const std::string& path) const;
    std::string Get(const std::string& key, const std::string& fallback = "") const;
    int Int(const std::string& key, int fallback = 0) const;
    float Float(const std::string& key, float fallback = 0) const;
};

// Parse UTF-8/ASCII text into a synthetic root. No filesystem or engine calls.
// Comments are accepted and the first NUL ends input. Conditions are retained, not
// evaluated. #base/#include stay explicit entries; callers choose load order.
bool ParseKeyValues(const std::string& text, KeyValue& root, std::string* error = nullptr);
bool DecodeResource(const unsigned char* bytes, std::size_t size,
                    std::string& utf8, std::string* error = nullptr);
const KeyValue& ResourceBody(const KeyValue& root);

struct RGBA {
    int r, g, b, a;
    RGBA(int red = 0, int green = 0, int blue = 0, int alpha = 255)
        : r(red), g(green), b(blue), a(alpha) {}
};

// Non-owning views: parsed nodes must outlive this object. A fallback is used
// only when explicitly supplied. Asset presence does not establish scheme
// inheritance or which scheme the original native control selected.
class Scheme {
public:
    explicit Scheme(const KeyValue& primary, const KeyValue* fallback = nullptr);
    const KeyValue* FindSetting(const std::string& path) const;
    RGBA Color(const std::string& key, RGBA fallback = RGBA()) const;
    const KeyValue* Font(const std::string& name) const;
    const KeyValue* Border(const std::string& name) const;
private:
    const KeyValue* primary_;
    const KeyValue* fallback_;
    const KeyValue* InSection(const char* section, const std::string& key) const;
};

} }
#endif
