//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// 2．建立一个对象数组，内放5个学生的数据（学号、成绩），设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生中成绩最高者，并输出其学号。初值自拟。

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
	};
	void show(){
		cout << "学号：" << no << "分数：" << score;
	};
	float getScore(){
		return score;
	};
	float getNo(){
		return no;
	};
};

Student max(Student (&students)[5]){
//Student max(Student *students){
	int max_score_student_idx = 0;
	int length = sizeof(students) / sizeof(Student);
	cout << "length: " << length;
	for (int i=0; i<5; i++){
		if (i == 0 ) continue;
		if (students[i].getScore()> students[max_score_student_idx].getScore()){
			max_score_student_idx = i;
		}
	}
	return students[max_score_student_idx];
}


int main(){
	Student students[5] = {Student(1, 59.8), Student(2, 99.9), Student(3, 88.9), Student(4, 77.9), Student(5, 44.9)};
	Student max_score_student = max(students);
	cout << "最高分数的学生:" << endl;
	cout << "学号：" << max_score_student.getNo() << " 分数：" << max_score_student.getScore();
	return 1;
}
