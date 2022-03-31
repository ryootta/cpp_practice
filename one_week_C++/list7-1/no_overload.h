#ifndef _OVERLOAD_H_
#define _OVERLOAD_H_

class Calc{
	public:
		//Calc(); //引数のないときデフォルトコンストラクタは必要ない
		int add1(int a, int b);
		int add2(int a, int b, int c);
		int add3(int a, int b, int c, int d);
	
};

#endif

