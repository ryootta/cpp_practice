#include "overload.h"

Calc::Calc(int a, int b, int c, int d) : m_a(a), m_b(b), m_c(c), m_d(d) {}

int Calc::add1()
{
	return m_a + m_b;
}
int Calc::add2()
{
	return m_a + m_b + m_c;
}
int Calc::add3()
{
	return m_a + m_b + m_c + m_d;
}
void Calc::setValue(int a, int b, int c, int d)
{
	m_a = a; m_b = b; m_c = c; m_d = d;
}

