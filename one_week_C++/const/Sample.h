#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

using namespace std;

class Const{
	private:
		string m_str;
	public:
		Const();
		void setStr(const string str);
		string getStr() const;
		static const int cst = 100;
};

#endif // _SAMPLE_H_
