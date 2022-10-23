//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// ．写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形），
// 用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。




#include <iostream>
#include <cstring>
using namespace std;


class Shape{
public:
	virtual void printArea() = 0;
	virtual ~Shape(){

	}

};

class Circle: public Shape{
private:
	double r;
public:
	Circle(double x){
		r=x;
	}
	void printArea(){
		cout << r * r * 3.14 << endl;
	}
};

class Rectangle: public Shape{
private:
	double x, y;
public:
	Rectangle(double w, double h){
		x = w;
		y = h;
	}
	void printArea(){
		cout << x * y << endl;
	}
};
class Trapezoid: public Shape{
private:
	double x, y, h;
public:
	Trapezoid(double _x, double _y, double _h){
		x = _x;
		y = _y;
		h = _h;
	}
	void printArea(){
		cout << ((x + y) * h)/2  << endl;
	}
};

int main16(){
	cout << "16.shape抽象类";

	Circle s1 = Circle(2);
	s1.printArea();

	Rectangle s2 = Rectangle(2, 3);
	s2.printArea();
	Trapezoid s3 = Trapezoid(1,2,3);
	s3.printArea();

}
