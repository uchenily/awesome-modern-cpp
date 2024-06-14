# awesome-modern-cpp

Modern C++集合

在这个仓库中, 是怎么定义 `Modern` C++的?

- C++98 ❌
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

网络基础库/框架/开发工具, 协程, 高并发

- [zedio](https://github.com/8sileus/zedio): 用现代c++编写的异步运行时，基于c++ 20协程和iouring

- [async_simple](https://github.com/alibaba/async_simple): 简单，轻量级和易于使用的异步组件

- [cinatra](https://github.com/qicosmos/cinatra): 现代c++(c++20)，跨平台，header-only，易于使用的HTTP框架

- [asio-grpc](https://github.com/Tradias/asio-grpc): 异步GRPC, (使用asio/unified executors)

- [coroio](https://github.com/resetius/coroio): 使用c++20协程的网络库

- [libfv](https://github.com/fawdlstty/libfv): C++20 纯头文件网络库，支持 TCP/SSL/Http/websocket 服务器端与客户端

- [co_async](https://github.com/archibate/co_async): c++ 20协程库 (教学目的)

- [coke](https://github.com/kedixa/coke): 协程版 [Workflow](https://github.com/sogou/workflow)

## RPC

反射/RPC

- [zpp_bits](https://github.com/eyalz800/zpp_bits): 一个轻量级的c++ 20序列化和RPC库


## 反射

编译期反射/运行时反射

- [reflect-cpp](https://github.com/getml/reflect-cpp): 一个c++ 20库，使用反射进行快速序列化、反序列化和验证。支持JSON, BSON, CBOR, flexbuffers, msgpack, TOML, XML, YAML

- [USRefl](https://github.com/Ubpa/USRefl): header-only，很小(99行)和强大的c++ 20静态反射库

- [meta.hpp](https://github.com/BlackMATov/meta.hpp): C++20动态反射库

## 序列化

C++对象序列化/反序列化, pack/unpack, JSON

- [glaze](https://github.com/stephenberry/glaze): 极快的现代c++ JSON库, 从对象内存中读写，提供简化的接口并提供了令人难以置信的性能

- [magic-cpp](https://github.com/16bit-ykiko/magic-cpp): 一个 header-only的库，它旨在让您更加方便的使用C++，包括了可视化类型名，对结构体枚举的反射等一些列功能，它能帮摆脱那难以阅读的编译器报错信息

## 算法

algorithm/range/sequence/collection

- [flux](https://github.com/tcbrindle/flux): 面向序列编程的c++ 20库

## 编码

- [libunicode](https://github.com/contour-terminal/libunicode): 现代c++ 20 Unicode库

- [consteval-huffman](https://github.com/tcsullivan/consteval-huffman): 编译期huffman编码压缩


## 图形学

- [matrix](https://github.com/fengwang/matrix): 一个现代的，c++ 20的，单头文件dense 2D矩阵库

## 模板引擎

模板系统/模板引擎

- [bustache](https://github.com/jamboree/bustache): `{{mustache}}`的C++20实现

## 测试框架

测试工具/测试框架

- [ut](https://github.com/boost-ext/ut): c++单头文件/单模块，无宏的(微型)单元测试框架

- [clean-test](https://github.com/clean-test/clean-test): 现代C++20测试框架

## 未分类

- [yalantinglibs](https://github.com/alibaba/yalantinglibs): 一个c++20库的集合，包括coro_rpc, struct_pack, struct_json, struct_xml, struct_pb, easylog, async_simple

- [rpp](https://github.com/TheNumbat/rpp): Minimal Rust-inspired C++20 STL replacement
