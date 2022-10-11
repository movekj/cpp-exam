//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//有两个长方柱，其长、宽、高分别为：（1）12，20，25；（2）10，30，20。分别求他们的体积。编一个基于对象的程序.
//且定义两个构造函数，其中一个有参数，一个无参数。
#include <iostream>
using namespace std;

class Box{
private:
	int lenght, width, height;
public:
	Box(){
		lenght = 12;
		width = 20;
		height = 25;
	};
	Box(int l, int w, int h){
		lenght = l;
		width = w;
		height = h;
	};
	int volume(){
		return lenght * width * height;
	}
};


int main2(){
	Box box1 = Box();
	Box box2 = Box(10, 30, 20);
	cout << "带构造参数盒子" << endl;
	cout << "box1体积为：" << box1.volume() << endl;
	cout << "box2体积为：" << box2.volume() << endl;


}
