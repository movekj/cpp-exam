/*
 * 17.cpp
 *
 *  Created on: 2022年10月23日
 *      Author: lixingxing
 */


//2．设计一个Time类，包括三个私有数据成员：hour,minute,sec，用构造函数初始化,内设公用函数display(Date &d),
// 设计一个Date类，包括三个私有数据成员：month,day,year，也用构适函数初始化；
//定义两个带参数的对象t1(12,30,55),d1(3,25,2010)，通过友员成员函数的应用，输出d1和t1的值。

#include <iostream>
#include <string>
using namespace std;




class Date{
private:
	int month;
	int day;
	int year;
public:
	Date(int x, int y, int z){
		month = x;
		day = y;
		year = z;
	};
	friend void display(Date &d);
	void display(){
		cout <<  year << "/" << month << "/" << day;

	};

};

class Time{
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int x, int y, int z){
		hour = x;
		minute = y;
		sec = z;
	};
	void display(){
		cout << hour << ":" << minute << ":" << sec << endl;
	}

	void display(Date &d);
};

void Time::display(Date &d){
	d.display();
	cout << " ";
	this->display();
}


int main18(){
   Time t1(12,30,55);
   Date d1(3,25,2010);
   cout << "d1.display()" << endl;
   d1.display();
   cout << endl;

   cout << endl <<  "t1.display();" << endl;
   t1.display();

   cout << endl << "t1.display(d1);" << endl;
   t1.display(d1);

	return 0;
}
