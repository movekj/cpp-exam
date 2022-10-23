/*
 * 17.cpp
 *
 *  Created on: 2022年10月23日
 *      Author: lixingxing
 */


//16．定义一个人员类Cperson，包括数据成员：姓名、编号、性别和用于输入输出的成员函数。
// 在此基础上派生出学生类CStudent(增加成绩)和老师类Cteacher(增加教龄)，并实现对学生和教师信息的输入输出。

#include <iostream>
#include <string>
using namespace std;


class Cperson{
private:
	string name;
	int id;
	string gender;


public:
	void input(){
		cout << "请输入姓名:" << endl;
		cin >> name;
		cout << "请输入id" << endl;
		cin  >> id;
		cout << "请输入性别:" << endl;
	    cin >> gender;

	}
	void print(){
		cout << "姓名: " << name << endl;
		cout << "id: " << id << endl;
		cout << "性别: " << gender <<  endl;
		cout << endl;
	}

};

class Cstudent: public Cperson{
private:
	double score;
public:
	void input(){
		Cperson::input();
		cout << "请输入成绩:" << endl;
	    cin >> score;
	}
	void print(){
		Cperson::print();
		cout << "成绩: " << score << endl;
		cout << endl;
	}
};


class Cteacher: public Cperson{
private:
	int techer_age;
public:
	void input(){
		Cperson::input();
		cout << "请输入:" << endl;
	    cin >> techer_age;
	}
	void print(){
		Cperson::print();
		cout << "教龄: " << techer_age << endl;
		cout << endl;
	}
};
//ostream &operator<<(ostream &os, const Cperson &c1){
//		os << "sss";
//		os << c1.name << c1.id << c1.gender;
//		return os;
//	}

int main17(){
	cout << "17. cperson 类继承-输入和输出函数" << endl;
	cout << "请输入cperson信息" << endl;
	Cperson cperson;
	cperson.input();
	cperson.print();
	cout << "请输入cstudent信息" << endl;
	Cstudent cstudent;
	cstudent.input();
	cstudent.print();
	cout << "请输入cteacher信息" << endl;
	Cteacher cteacher;
	cteacher.input();
	cteacher.print();
	return 0;
}
