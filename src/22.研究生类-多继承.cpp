#include <iostream>
#include <string>
using namespace std;

//8．声明一个教师（Teacher）类和一个学生（Student）类，用多重继承的方式声明一个研究生（Graduate）派生类。
// 教师类中包括数据成员name（姓名），age（年龄），title（职称）。学生类中包括数据成员name（姓名），age（年龄），score（成绩）。
// 在定义派生类对象时给出初始化的数据（自已定），然后输出这些数据。初值自拟。


class Teacher{
protected:
	string name;
	int age;
	string title;
public:
	Teacher(string x, int y, string z){
		name = x;
		age = y;
		title = z;
	}

};
class Student{
protected:
	string name;
	int age;
	double score;
public:
	Student(string x, int y, double z){
		name = x;
		age = y;
		score = z;
	}

};

class Graduate: public Teacher, public Student{
private:
	string name;
	int age;
public:
	Graduate(string w, int x , string y, double z):Teacher( w,z, y),Student(w, x, z){
		name = w;
		age = x;
		title = y;
		score = z;
	}
	void display(){
		cout << "姓名:" << name << endl;
		cout << "年龄:" << age << endl;
		cout << "职称:" << title << endl;
		cout << "分数:" << score << endl;
	}
};

int main22(){
	cout << "22.研究生类-多继承" << endl;
	Graduate  g("李星星", 29, "高级教师", 100);
	g.display();


}
