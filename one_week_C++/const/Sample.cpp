#include "Sample.h"

Const::Const(){
	m_str = " ";
}
void Const::setStr(const string str)
{
	m_str = str;
	//str = " "; 
}
string Const::getStr() const
{
	//m_str = " ";
	return m_str;
}

