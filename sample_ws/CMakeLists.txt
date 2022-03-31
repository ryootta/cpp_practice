# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.10.2)
# プロジェクト名と使用する言語を設定
project(sample_ws CXX)

# 静的ライブラリの作成
add_library(hello_static STATIC src/hello.cpp)
# hello_staticのインクルードディレクトリを指定
target_include_directories(hello_static
	PUBLIC ${PROJECT_SOURCE_DIR}/include)


# 動的ライブラリの作成
add_library(hello_share SHARED src/hello.cpp)
# hello_shareのインクルードディレクトリを指定
target_include_directories(hello_share
	PUBLIC ${PROJECT_SOURCE_DIR}/include)


add_executable(main_static src/main.cpp)
target_link_libraries(main_static hello_static)

add_executable(main_share src/main.cpp)
target_link_libraries(main_share hello_share)

