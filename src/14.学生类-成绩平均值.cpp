//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 定义一个描述学生基本情况的类，数据成员包括姓名、学号、C++成绩、英语和数学成绩，成员函数包括输出数据，求出总成绩和平均成绩。数据自



#include <iostream>
#include <cstring>
using namespace std;
class Student{
private:
	int stu_no;
	char *name;
	double cpp_score;
	double english_score;
	double math_score;
public:
	Student(int x, char *y, double cs, double es, double ms){
		stu_no = x;
		name = y;
		cpp_score = cs;
		english_score = es;
		math_score = ms;

	}
	double avg_score(){
		return this->sum_score() /3;
	};
	double sum_score(){
		return cpp_score + english_score + math_score;
	};
	void display(){
		cout << "学号: " << stu_no << endl;
		cout << "姓名:" << name << endl;
		cout << "c++成绩: " << cpp_score << endl;
		cout << "英语成绩: "<< english_score << endl;
		cout << "数学成绩: "<< math_score << endl;
	}

};




int main14(){
	cout << "14.学生类-成绩平均值";
	Student s1 = Student(1, "lxx", 100, 99.7, 98);
	cout << s1.avg_score() << endl;
	s1.display();


}
