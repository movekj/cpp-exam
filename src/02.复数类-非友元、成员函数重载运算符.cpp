//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 2．定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函数重载为非成员、非友元的普通函数。编写程序，求两个复数之和。初值自拟。

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
};

Complex operator+(Complex &c1,  Complex &c2){
	int real = c1.getReal() + c2.getReal();
	int img = c1.getImg() + c2.getImg();
	return Complex(real, img);

};

int main(){
	Complex c1 = Complex(1,2);
	Complex c2 = Complex(1,2);

	Complex c3 = c1 + c2;
	c3.show();
}
