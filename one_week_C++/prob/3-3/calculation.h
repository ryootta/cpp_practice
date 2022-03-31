#ifndef _CALCULATION_H_
#define _CALCULATION_H_
#include <iostream>


class Calculation
{
	private:
		int number1;
		int number2;
	public:
		void setNumber1(int num);
		void setNumber2(int num);
		int getNumber1();
		int getNumber2();
		int add();
		int sub();
};

#endif
