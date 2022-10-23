/*
 * 17.cpp
 *
 *  Created on: 2022年10月23日
 *      Author: lixingxing
 */


// 3. 设计一个Time类，包括三个私有数据成员：hour,minute,sec，用构造函数初始化,
// 设计一个Date类，包括三个私有数据成员：month,day,year，也用构适函数初始化；
// 设计一个普通函数display(…),将display分别设置为T ime类和Date类的友元函数，在主函数中分别定义两个带参数的对象t1(12,30,55),d1(3,25,2010)，
// 调用desplay,输出年、月、日和时、分、秒。

#include <iostream>
#include <string>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int x, int y, int z){
		sec = z;
		minute = y;
		hour = x;

	};
	friend void display(Time& time){
		cout << time.hour << ":" << time.minute << ":" << time.sec;
	}

};
class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int x, int y, int z){
		year =z;
		day = y;
		month = x;
	}
	friend void display(Date& date){
		cout << date.year << "/" << date.month << "/" << date.day;
	}
};
template <class T>
void display(T t){
	t.display(t);
}



int main19(){
	cout << "19. time和date类-print模板函数" << endl;
	Time t1(12,30,55);

	Date d1(3,25,2010);
	display(t1);
	cout << endl;
	display(d1);

	return 0;
}
