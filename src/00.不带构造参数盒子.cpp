//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 1．定义盒子Box类，要求具有以下成员：长、宽、高分别为x,y,z，可设置盒子形状；可计算盒子的表面积体积；可计算盒子的表面积。
#include <iostream>
#include <string>

using namespace std;
class Box{
private:
	double x, y, z;
	string shape;
public:
	Box (double length, double width, double height){
		x = length; 
		y = width;
		z = height;
	}
	double getArea(){

		return (x * y + x * z + y * z) * 2;
	}
	double getVolume(){
		return x * y * z;
	}
	string getShape(){
		return shape;
	}
	void setShape(string _shape){
		shape = _shape;
	}
};

int main0() {
	Box b = Box(2, 2, 2);
	b.setShape("正方形");
	cout << "不带构造参数盒子" << endl;
	cout << "b.getArea():" << b.getArea() << endl; // prints !!!Hello World!!!
	cout << "b.getVolume():" << b.getVolume() << endl; // prints !!!Hello World!!!
	cout << "b.getShape():" << b.getShape() << endl;
}
