#include "no_overload.h"

//Calc::Calc() {} //引数のないときデフォルトコンストラクタは必要ない
int Calc::add1(int a, int b)
{
	return a + b;
}
int Calc::add2(int a, int b, int c)
{
	return a + b + c;
}
int Calc::add3(int a, int b, int c, int d)
{
	return a + b + c + d;
}

