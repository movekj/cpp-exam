//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 2．定义一个复数类Complex，重载运算符 “*”，“/”，使之能用于复数的乘，除。运算符重载函数作为Complex类的成员函数。
// 编程序，分别求出两个复数之积和商。初值自拟。
// 提示：两复数相乘的计算公式为：(a+bi)*(c+di)=(ac-bd)+(ad+bc)i。两复数相除的计算公式为：(a+bi)/(c+di)=(ac+bd)/(c*c+d*d)+(bc-ad) /(c*c+d*d)i。


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
	// (a+bi)*(c+di)=(ac-bd)+(ad+bc)i
	Complex operator*(Complex &c2){
		int real = this->getReal() * c2.getReal() - this->getImg() *  c2.getImg();
		int img = this->getReal() + c2.getImg() + c2.getReal() + this->getImg();
		return Complex(real, img);

	};

	// (a+bi)/(c+di)=(ac+bd)/(c*c+d*d)+(bc-ad) /(c*c+d*d)i
	Complex operator/(Complex &c2){
		int real = (this->getReal() * c2.getReal()  + this->getImg() + c2.getImg())/ (c2.getReal() * c2.getReal() + c2.getImg() * c2.getImg());

		int img = (this->getImg() * c2.getReal() - this->getReal() * c2.getImg()) /(c2.getReal() * c2.getReal() + c2.getImg() * c2.getImg()) ;
		return Complex(real, img);

	};
};



int main8(){
	cout << "08.复数类-成员函数重载运算符乘法和除法" << endl;
	Complex c1 = Complex(1,2);
	Complex c2 = Complex(1,2);

	Complex c3 = c1 * c2;
	Complex c4 = c1 / c2;
	c3.show();
	c2.show();
}
