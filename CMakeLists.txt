cmake_minimum_required(VERSION 3.27)
project(leetcode_training)

set(CMAKE_CXX_STANDARD 23)

add_executable(leetcode_training main.cpp)

add_executable(1 content/1.cpp)
add_executable(089_打家劫舍 LCR/089_打家劫舍.cpp)
add_executable(090_打家劫舍2 LCR/090_打家劫舍2.cpp)
add_executable(124_推理二叉树 LCR/124_推理二叉树.cpp)
add_executable(126_斐波那契数 LCR/126_斐波那契数.cpp)
add_executable(2529_正整数和负整数的最大计数 daily_training/2529_正整数和负整数的最大计数.cpp)
add_executable(142_训练计划Ⅳ LCR/142_训练计划Ⅳ.cpp)
add_executable(7_整数反转 daily_training/7_整数反转.cpp)
add_executable(1702_修改后的最大二进制字符串 daily_training/1702_修改后的最大二进制字符串.cpp)
add_executable(91_解码方法 daily_training/91_解码方法.cpp)
add_executable(706_设计哈希映射 daily_training/706_设计哈希映射.cpp)