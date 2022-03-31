#ifndef _OVERLOAD_H_
#define _OVERLOAD_H_

class Calc{
	public:
		Calc(int a, int b, int c, int d);
		int add1();
		int add2();
		int add3();
		void setValue(int a, int b, int c, int d);
	private:
		int m_a, m_b, m_c, m_d;
	
};

#endif

