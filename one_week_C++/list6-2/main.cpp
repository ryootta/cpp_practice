#include "Position2D.h"
#include <iostream>

using namespace std;

int main(int argc,char** args){
	Position2D p;
	int x, y;
	cout << "input setVale(x,y)" << endl;
	cin >> x >> y;
	p.setValue(x,y);
	cout << "(x,y)=(" << p.getX() << "," << p.getY() << ")" << endl;
	cout << "input move(x,y)" << endl;
	cin >> x >> y;
	p.move(x,y);
	cout << "(x,y)=(" << p.getX() << "," << p.getY() << ")" << endl;
	cout << "reset position" << endl;
	p.resetPosition();
	cout << "(x,y)=" << p.getX() << "," << p.getY() << ")" << endl;
	return 0;
}
	

