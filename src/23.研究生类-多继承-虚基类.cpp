#include <iostream>
using namespace std;


//8．声明一个教师（Teacher）类和一个学生（Student）类，用多重继承的方式声明一个研究生（Graduate）派生类。
// 教师类中包括数据成员name（姓名），age（年龄），title（职称）。学生类中包括数据成员name（姓名），age（年龄），score（成绩）。
// 在定义派生类对象时给出初始化的数据（自已定），然后输出这些数据。初值自拟。
// 9．在上题的基础上，在Teacher类和Student类之上增加一个共同的基类Person，
// 如下图所示。作为人员的一些基本数据都放在Person中，在Teacher类和Student类中再增加一些必要的数据（Student类中增加score,
// Teacher类中增加职称title,Graduate类中增加工资wages）。初值自拟。
class Person{
protected:
	string name;
	int age;
public:
	Person(string n, int a){
		name = n;
		age = a;
	}
};
class Teacher: virtual public Person{
protected:
	string title;
public:
	Teacher(string n, int a, string t): Person(n, a){
		title = t;
	}

};
class Student: virtual public Person{
protected:
	double score;
public:
	Student(string n, int a, double s): Person(n, a){
		score = s;
	}
};

class Graduate: public Teacher, public Student{
private:
	int wages;
public:
	Graduate(string n, int a, double s, string t, int w): Person(n, a), Teacher(n, a, t), Student(n, a, s){
		wages = w;
	}
	void display(){
		cout << "name:" << name << endl;
		cout << "age:" << age << endl;
		cout << "title:" << title << endl;
		cout << "score:" << score << endl;
		cout << "wages:" << wages << endl;
	}

};

int main23(){
	Graduate g("李星星", 29, 100.0, "高级工程师", 300000);
	g.display();
	return 0;
}
