//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 2．定义一个复数类Complex，重载运算符“＋”，使之能用于复数的加法运算。参加运算的两个运算量可以都是类对象，
// 也可以其中有一个是整数，顺序任意。例如：c1+c2，i+c1，c1+i均合法（设i为整数，c1，c2为复数）。
//编程序，分别求两个复数之和、整数和复数之和。初值自拟。

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
Complex operator+ (Complex c, int num){
	int real = c.getReal() + num;
	return Complex(real, c.getImg());
}

Complex operator+ (int num, Complex c){
	int real = c.getReal() + num;
	return Complex(real, c.getImg());
}


int main9(){
	cout << "09.复数类-复数和整数相加" << endl;
	Complex c1 = Complex(1, 2);
	Complex sum_c1 = c1 + 1;
	Complex sum_c2 = 3 + c1;

	sum_c1.show();
	sum_c2.show();
}
