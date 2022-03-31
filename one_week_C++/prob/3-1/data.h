#ifndef _CDATA_H
#define _CDATA_H

#include <iostream>
#include <string>

using namespace std;

class CData{
	public:
		void init();
		void setNumber(int num);
		void setComment(string com);
		int getNumber();
		string getComment();
	private:
		int number;
		string comment;
};

#endif
