#include "car.h"
#include <iostream>

using namespace std;

CCar::CCar() : m_fuel(0),m_migration(0)
{
	cout << "new CCar obj" << endl;
}
CCar::~CCar() 
{ 
	cout << "delete CCar obj" << endl;
}
void CCar::move()
{
	if(m_fuel >= 0){
		m_migration++;
		m_fuel--;
	}
	cout << "migration:" << m_migration << endl;
	cout << "fuel" << m_fuel << endl;
}
void CCar::supply(int fuel)
{
	if(fuel > 0){
		m_fuel += fuel;
	}
	cout << "fuel" << m_fuel << endl;
}

