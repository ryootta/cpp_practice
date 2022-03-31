#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119)
{
	cout << "new CAmbulance obj" <<endl;
}
CAmbulance::~CAmbulance()
{
	cout << "delete CAmbulance obj" <<endl;
}
void CAmbulance::sevePeople(){
	cout << "if you seve people, call number is " << m_number <<endl;
}

