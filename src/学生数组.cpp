//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 建立一个对象数组，内放5个学生的数据（学号、成绩），用指针指向数组首元素，输出第1，3，5个学生的数据。初值自拟。

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no;
	float score;
public:
	Student(int x, float y){
		no = x;
		score = y;
	}
	void show(){
		cout << "学号: " << no << "成绩: " << score << endl;
	}
};


int main4(){

	cout << "学生数组" << endl;
	Student arr[5] = {Student(1, 99),Student(2, 98), Student(3, 100), Student(4, 59.9), Student(5, 88.9)};
	arr[0].show();
	arr[2].show();
	arr[3].show();
	arr[4].show();


}

