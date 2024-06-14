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
- [反射](#反射)
- [序列化](#序列化)
- [其他](#其他)

## 日志

- TODO

## 协程

C++20协程, 任务, 调度器

- [concurrentcpp](https://github.com/David-Haim/concurrencpp): 通过使用任务、执行器和协程轻松安全地编写高并发的应用程序, 允许应用程序通过使用并行协程轻松编写并行算法


## 网络

网络基础库/框架/开发工具, 协程, 高并发

- [zedio](https://github.com/8sileus/zedio): 用现代c++编写的异步运行时，基于c++ 20协程和iouring

- [async_simple](https://github.com/alibaba/async_simple): 简单，轻量级和易于使用的异步组件


## 反射

编译期反射

## 序列化

C++对象序列化/反序列化, pack/unpack, JSON

- [glaze](https://github.com/stephenberry/glaze): 极快的现代c++ JSON库, 从对象内存中读写，提供简化的接口并提供了令人难以置信的性能

- [magic-cpp](https://github.com/16bit-ykiko/magic-cpp): 一个 header-only的库，它旨在让您更加方便的使用C++，包括了可视化类型名，对结构体枚举的反射等一些列功能，它能帮摆脱那难以阅读的编译器报错信息

## 其他

- [yalantinglibs](https://github.com/alibaba/yalantinglibs): 一个c++20库的集合，包括coro_rpc, struct_pack, struct_json, struct_xml, struct_pb, easylog, async_simple
