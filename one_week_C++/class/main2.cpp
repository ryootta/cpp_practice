#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
	CSample obj1,obj2; //CSmapleのインスタンスを複数生成
	int num1;
	int num2;

	cout << "整数を入力して下さい:" << endl;
        cin >> num1; 
	cin >> num2;

	obj1.set(num1); //obj1のメソッド呼び出し
        obj2.set(num2);	//obj2のメソッド呼び出し
	cout << obj1.get() << endl; //obj1のメンバ変数の値を出力
	cout << obj2.get() << endl; //obj2のメンバ変数の値を出力
	
	return 0;
}	
