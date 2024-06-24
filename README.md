# Awesome-Modern-CPP

<p align="center"><img src="https://github.com/uchenily/awesome-modern-cpp/blob/main/resources/badge.svg"></p>

Modern C++集合

在这个仓库中, 是怎么定义 `Modern` C++的?

- C++98 ❌
- C++03 ❌
- C++11 ❌
- C++14 ❌
- C++17 ❌
- C++20 ✅
- C++23 ✅
- ...

当然, 有很多库都会向前兼容较老的标准, 筛选标准是根据 "是否广泛使用了新标准中的特性" 为依据.

# 目录

- [日志](#日志)
- [协程](#协程)
- [网络](#网络)
- [RPC](#RPC)
- [反射](#反射)
- [序列化](#序列化)
- [算法](#算法)
- [编码](#编码)
- [图形学](#图形学)
- [游戏开发](#游戏开发)
- [模板引擎](#模板引擎)
- [测试框架](#测试框架)
- [未分类](#未分类)

## 日志

- TODO

## 协程

<details open>
<summary>⛏</summary>

C++20协程, 任务, 调度器

- [concurrentcpp](https://github.com/David-Haim/concurrencpp): 通过使用任务、执行器和协程轻松安全地编写高并发的应用程序, 允许应用程序通过使用并行协程轻松编写并行算法

- [libfork](https://github.com/ConorWilliams/libfork): 一个前沿的, lock-free, wait-free, 实现任务窃取的库，建立在c++ 20的协程上

- [libasync](https://github.com/managarm/libasync): c++ 20的异步原语库
</details>

## 网络

<details open>
<summary>⛏</summary>

网络基础库/框架/开发工具, 协程, 高并发

- [zedio](https://github.com/8sileus/zedio): 用现代c++编写的异步运行时，基于c++ 20协程和iouring

- [async_simple](https://github.com/alibaba/async_simple): 简单，轻量级和易于使用的异步组件

- [cinatra](https://github.com/qicosmos/cinatra): 现代c++(c++20)，跨平台，header-only，易于使用的HTTP框架

- [coroio](https://github.com/resetius/coroio): 使用c++20协程的网络库

- [libfv](https://github.com/fawdlstty/libfv): C++20 纯头文件网络库，支持 TCP/SSL/Http/websocket 服务器端与客户端

- [co_async](https://github.com/archibate/co_async): c++ 20协程库 (教学目的)

- [coke](https://github.com/kedixa/coke): 协程版 [Workflow](https://github.com/sogou/workflow)
</details>

## RPC

<details open>
<summary>⛏</summary>

反射/RPC

- [asio-grpc](https://github.com/Tradias/asio-grpc): 异步gRPC, (使用asio/unified executors)

- [zpp_bits](https://github.com/eyalz800/zpp_bits): 一个轻量级的c++ 20序列化和RPC库
</details>

## 反射

<details open>
<summary>⛏</summary>

编译期反射/运行时反射

- [reflect-cpp](https://github.com/getml/reflect-cpp): 一个c++ 20库，使用反射进行快速序列化、反序列化和验证。支持JSON, BSON, CBOR, flexbuffers, msgpack, TOML, XML, YAML

- [USRefl](https://github.com/Ubpa/USRefl): header-only，很小(99行)和强大的c++ 20静态反射库

- [meta.hpp](https://github.com/BlackMATov/meta.hpp): C++20动态反射库

- [reflect](https://github.com/boost-ext/reflect): C++20静态反射库

</details>

## 序列化

<details open>
<summary>⛏</summary>

C++对象序列化/反序列化, pack/unpack, JSON

- [glaze](https://github.com/stephenberry/glaze): 极快的现代c++ JSON库, 从对象内存中读写，提供简化的接口并提供了令人难以置信的性能

- [magic-cpp](https://github.com/16bit-ykiko/magic-cpp): 一个 header-only的库，它旨在让您更加方便的使用C++，包括了可视化类型名，对结构体枚举的反射等一些列功能，它能帮摆脱那难以阅读的编译器报错信息

- [serialize](https://github.com/RedSkittleFox/serialize): C++23序列化库, 提供了一个简单易用的接口，支持容器、普通类型和聚合类型，并提供了简单的接口来创建自定义序列化方法

</details>

## 算法

<details open>
<summary>⛏</summary>

algorithm/range/sequence/collection

- [flux](https://github.com/tcbrindle/flux): 面向序列编程的c++ 20库
</details>

## 编码

<details open>
<summary>⛏</summary>

- [libunicode](https://github.com/contour-terminal/libunicode): 现代c++ 20 Unicode库

<details closed><summary></summary>

```cpp
    auto a8 = std::string{"Hello, World!"};
    auto a32 = unicode::from_utf8(a8);
    assert(a32 == U"Hello, World!");

    // auto b8 = string { (char const*) u8"你好, 世界" };
    auto b8 = std::string{"你好, 世界"};
    std::cout << "b8 len: " << b8.size() << '\n';
    auto b32 = unicode::from_utf8(b8);
    assert(b32 == U"你好, 世界");
    std::cout << "b32 len: " << b32.size() << '\n';

    auto u32str = std::u32string{U"你好😃"};
    auto str = unicode::to_utf8(u32str);
    assert(str == "你好😃");
```

```text
b8 len: 14
b32 len: 6
```

</details>

- [consteval-huffman](https://github.com/tcsullivan/consteval-huffman): 编译期huffman编码压缩(特定场景下能减少程序体积)

<details closed><summary></summary>

```cpp
    auto data
        = "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100"_huffman;

    std::cout << "压缩前大小(字节): " << data.uncompressed_size() << '\n';
    std::cout << "压缩后大小(字节): " << data.compressed_size() << '\n';
    std::cout << "节省空间: " << data.bytes_saved() << '\n';

    std::cout << "解码后的数据: \n";
    for (char c : data) {
        std::cout << c;
    }
```

```text
压缩前大小(字节): 292
压缩后大小(字节): 187
节省空间: 105
解码后的数据:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100
```

</details>

</details>

## 图形学

<details open>
<summary>⛏</summary>

- [matrix](https://github.com/fengwang/matrix): 一个现代的，c++ 20的，单头文件dense 2D矩阵库
</details>

## 游戏开发

<details open>
<summary>⛏</summary>

- [peredvizhnikov-engine](https://github.com/eduard-permyakov/peredvizhnikov-engine): 一个用c++20编写的完全无锁的游戏引擎。它在语言的协程原语之上实现了并发计算的 actor 模型。

</details>

## 模板引擎

<details open>
<summary>⛏</summary>

模板系统/模板引擎

- [bustache](https://github.com/jamboree/bustache): `{{mustache}}`的C++20实现
</details>

## 测试框架

<details open>
<summary>⛏</summary>

测试工具/测试框架

- [ut](https://github.com/boost-ext/ut): c++单头文件/单模块，无宏的(微型)单元测试框架

- [clean-test](https://github.com/clean-test/clean-test): 现代C++20测试框架
</details>

## 未分类

<details open>
<summary>⛏</summary>

- [yalantinglibs](https://github.com/alibaba/yalantinglibs): 一个c++20库的集合，包括coro_rpc, struct_pack, struct_json, struct_xml, struct_pb, easylog, async_simple

- [rpp](https://github.com/TheNumbat/rpp): Minimal Rust-inspired C++20 STL replacement

- [libv](https://github.com/cpplibv/libv): C++23编写的包含大量可重用代码的库集合

- [OpenSiv3D](https://github.com/Siv3D/OpenSiv3D): 一个开源框架，允许使用现代c++(C++20), 结合声音，图像和AI, 编写有趣的游戏和应用程序. 支持 Windows / macOS / Linux / Web 平台.

- [STX](https://github.com/lamarrr/STX): 一个库和实用程序的集合，旨在使使用c++更容易，更不容易出错。

</details>
