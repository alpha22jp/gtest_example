cmake_minimum_required(VERSION 2.8)

## 設定
set(GTEST_ROOT "$ENV{HOME}/work/googletest")
set(TARGET "gtest_myint")

## コンパイルフラグ
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -Wextra -Wno-conversion-null")

## ソースコード
file(GLOB SRCS "*.c*")
file(GLOB TEST_SRCS "test/*.cpp")

## インクルードパス
include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${GTEST_ROOT}/googletest/include")

## ビルドターゲット
add_executable(${TARGET} ${SRCS} ${TEST_SRCS})

## リンクするライブラリ
target_link_libraries(${TARGET} ${GTEST_ROOT}/build/googlemock/gtest/libgtest.a)
target_link_libraries(${TARGET} ${GTEST_ROOT}/build/googlemock/gtest/libgtest_main.a)
target_link_libraries(${TARGET} pthread)
