//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 2．将运算符“＋”重载为适用于复数加法，重载函数不作为成员函数，而放在类外，作为Complex类的友元函数。初值自拟。


#include <iostream>
#include <string>
using namespace std;

class Complex{
private:
	int real, img;
public:
	Complex(int x, int y){
		real = x;
		img = y;
	}
	friend Complex operator+(Complex com1, Complex com2);
	void show(){
		cout << "real: " << real << "img: " << img;
	}
};

Complex operator+(Complex com1, Complex com2){
	int real = com1.real + com2.real;
	int img = com1.img + com2.img;
	return Complex(real, img);
};

int main11(){
	cout << "11.复数类-运算符重载-友元类" << endl;
	Complex c1 = Complex(1, 2);
	Complex c2 = Complex(2, 3);
	Complex c3 = c1 + c2;
	c3.show();
}
