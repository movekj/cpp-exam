//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// ．先建立一个Point（点）类，包含数据成员x，y（坐标点）。以它为基类，派生出一个Circle（圆）类，
// 增加数据成员r（半径），再以Circle类为直接基类，派生出一个Cylinder（圆柱体）类，
// 在增加数据成员h（高）。编写程序，重载运算符“<<”和“>>”，使之能够用于输出以上类对象。

#include <iostream>
#include <cstring>
using namespace std;

class Point{
protected:
	int x, y;

};

class Circle: public Point{
protected:
	int r;

};
class Cylinder: public Circle{
private:
	int h;

};

int main15(){
	cout << "15.circle类-重载输入输出运算符.cpp";



}
