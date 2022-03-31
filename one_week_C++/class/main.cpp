#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
	CSample obj;
	int num;    //CSampleをインスタンス化

	cout << "整数を入力して下さい:" << endl;
        cin >> num;

	obj.set(num);  //CSampleのメンバ変数をセット
	cout << obj.get() << endl; //メンバ変数の値を出力
	
	return 0;
}	
