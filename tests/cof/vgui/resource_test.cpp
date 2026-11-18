#include "resource.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <iterator>
using namespace cof::vgui;

int main(int argc, char** argv) {
    KeyValue root;
    std::string error;
    assert(ParseKeyValues("// heading\nScheme { Colors { Gray \"40 40 40 128\" Cycle Loop Loop Cycle } "
        "BaseSettings { BgColor Gray Menu { FgColor Gray } } "
        "Fonts { Default { 1 { name Tahoma tall 16 } } } "
        "Borders { ButtonBorder Raised Raised { inset \"0 0 1 1\" } } "
        "duplicate one duplicate two [$WIN32] Path \"Resource\\Options.res\" }", root, &error));
    const KeyValue& body = ResourceBody(root);
    assert(body.name == "Scheme" && body.children.size() == 7);
    assert(body.Find("DUPLICATE")->value == "one");
    assert(body.children[5].value == "two" && body.children[5].condition == "$WIN32");
    assert(body.Get("Path") == "Resource\\Options.res");
    Scheme scheme(root);
    RGBA color = scheme.Color("BgColor");
    assert(color.r == 40 && color.a == 128);
    assert(scheme.Color("Menu.FgColor").g == 40);
    assert(scheme.Color("Cycle", RGBA(1,2,3,4)).a == 4);
    assert(scheme.Color("1 2 3 bad", RGBA(1,2,3,4)).a == 4);
    assert(scheme.Font("Default")->Find("1")->Int("tall") == 16);
    assert(scheme.Border("ButtonBorder")->Get("inset") == "0 0 1 1");
    KeyValue fallback, primary;
    assert(ParseKeyValues("Scheme { Colors { OnlyBase \"7 8 9\" } BaseSettings { FgColor OnlyBase } }", fallback));
    assert(ParseKeyValues("Scheme { Colors { OnlyBase \"1 2 3 4\" } }", primary));
    Scheme inherited(primary, &fallback);
    assert(inherited.Color("FgColor").a == 4 && inherited.Color("FgColor").r == 1);
    assert(ParseKeyValues("A { xpos c-20 }", root));
    assert(ResourceBody(root).Int("xpos", 99) == 99);
    assert(!ParseKeyValues("A { broken", root, &error) && !error.empty());
    assert(!ParseKeyValues("A { x \"unfinished", root, &error));
    assert(!ParseKeyValues("A { /* unfinished", root, &error));
    assert(!ParseKeyValues("}", root, &error));
    assert(ParseKeyValues(std::string("A B\0broken", 10), root));
    assert(root.children.size() == 1 && root.Get("A") == "B");
    std::string utf8;
    const unsigned char unicode[] = {0xff,0xfe, 0x1f,0x04, 0x40,0x04, 0x3d,0xd8, 0x42,0xde};
    assert(DecodeResource(unicode, sizeof(unicode), utf8));
    assert(utf8 == "\xD0\x9F\xD1\x80\xF0\x9F\x99\x82");
    const unsigned char broken[] = {0xff,0xfe,0x00,0xd8};
    assert(!DecodeResource(broken, sizeof(broken), utf8));
    const unsigned char big[] = {0xfe,0xff,0x00,0x41};
    assert(DecodeResource(big, sizeof(big), utf8) && utf8 == "A");
    unsigned files = 0;
    for (int i = 1; i < argc; ++i) {
        std::ifstream input(argv[i], std::ios::binary);
        if (!input) { std::cerr << "Cannot read " << argv[i] << '\n'; return 1; }
        std::string bytes((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
        if (!DecodeResource(reinterpret_cast<const unsigned char*>(bytes.data()), bytes.size(), utf8, &error) ||
            !ParseKeyValues(utf8, root, &error)) {
            std::cerr << argv[i] << ": " << error << '\n'; return 1;
        }
        ++files;
    }
    std::cout << "Resource parser PASS; original resource files=" << files << '\n';
}
