//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 2．用new建立一个动态一维数组，并初始化int[10]={1,2,3,4,5,6,7,8,9,10},用指针输出，最后销毁数组所占空间。

#include <iostream>
using namespace std;

int main4(){
	int *p;
	cout << "使用new初始化数组" << endl;
	p = new int[10];

	for (int i; i< 10; i++){
		*(p+i) = i;
		cout << *(p+i) << endl;
	}
	delete p;

}
