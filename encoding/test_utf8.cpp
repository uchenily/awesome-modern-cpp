#include <libunicode/utf8.h>

#include <cassert>
#include <iostream>

auto main() -> int {
    auto a8 = std::string{"Hello, World!"};
    auto a32 = unicode::from_utf8(a8);
    assert(a32 == U"Hello, World!");

    // auto b8 = string { (char const*) u8"你好, 世界" };
    auto b8 = std::string{"你好, 世界"};
    std::cout << " b8 len: " << b8.size() << '\n';
    auto b32 = unicode::from_utf8(b8);
    assert(b32 == U"你好, 世界");
    std::cout << " b32 len: " << b32.size() << '\n';

    auto u32str = std::u32string{U"你好😃"};
    auto str = unicode::to_utf8(u32str);
    assert(str == "你好😃");
}
