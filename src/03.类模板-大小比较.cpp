//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//1．声明一个类模板，利用它分别实现两个整数、浮点数和字符的比较，求出大数和小数。

#include <iostream>
#include <string>
using namespace std;

template <class T>
class ClassTemplate1{
private:
    T x, y;
public:

	ClassTemplate1(T num1, T num2){
		x = num1;
		y = num2;
	}
	T max(){

		if (x > y) return x;
		return y;
	}

	T min(){

		if (x < y) return x;
		return y;
	}
};


template <class T>
class ClassTemplate2{
private:
    T x, y;
public:

	T max(T x, T y){

		if (x > y) return x;
		return y;
	}

	T min(T x, T y){

		if (x < y) return x;
		return y;
	}
};


int main3(){

	cout << "类模板-大小比较" << endl;
	ClassTemplate2<int> Iclass;

	cout << Iclass.max(1, 2) << endl;
	cout << Iclass.min(1, 3) << endl;
	ClassTemplate1<float> fclass(1.1, 1.2);

	cout << fclass.max() << endl;
	cout << fclass.min() << endl;

	ClassTemplate1<string> sclass("abc", "bac");

	cout << sclass.max() << endl;
	cout << sclass.min() << endl;
}

