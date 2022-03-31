foo.cpp

g++ foo.cpp
// a.out

g++ foo.cpp -o foo
// foo

g++ -c foo.cpp
// foo.o(オブジェクトファイル)

複数ファイルのコンパイル
mylib.cpp mylib.h main.cpp
g++ -c -o main.o main.cpp
g++ -c -o mylib.o mylib.cpp
//mylib.o main.o
g++ main.o mylib.o -o out
//out 

g++ main.cpp mylib.cpp -o out
// out

    -Wall: 警告(Warning)をすべて(all)表示します．
    -std=c++11: C++11 の機能を使いたいときに付けます．
    -I <dir>: include search path を追加するときに付けます．
    -L <dir>: library search path を追加するときに付けます．
    -l <file>: library file をリンクするときに付けます．

