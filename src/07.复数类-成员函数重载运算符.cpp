//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 2．定义一个复数类Complex，重载运算符“＋”，“—”，使之能用于复数的加，减运算，运算符重载函数作为Complex类的成员函数。编程序，分别求出两个复数之和，差。初值自拟。

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
	int getReal(){
		return real;
	}
	int getImg(){
		return img;
	}
	void show(){
		cout << "real: " << real << "img: " << img << endl;
	}
	Complex operator+(Complex &c2){
		int real = this->getReal() + c2.getReal();
		int img = this->getImg() + c2.getImg();
		return Complex(real, img);

	};
};



int main7(){
	cout << "07.复数类-成员函数重载运算符" << endl;
	Complex c1 = Complex(1,2);
	Complex c2 = Complex(1,2);

	Complex c3 = c1 + c2;
	c3.show();
}
