//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 定义一个字符串类String，用来存放不定长的字符串，重载运算符“＝＝”，，用于两个字符串的等于比较运算。初值自拟。


#include <iostream>
#include <cstring>
using namespace std;

class String{
private:
	char *p;
public:
	String(char *s){
		p = s;
	};
//	int operator==(String str1){
//		int res =  this->str.compare(str1.str);
//		return res;
//	}
	friend int operator==(String s1, String s2);
};

int operator==(String s1, String s2){
	if (strcmp(s1.p, s2.p) == 0){
		return 1;
	}
	return 0;
}


int main12(){
	String s1 = String("sssssffs");
	String s2 = String("ssssss");
	cout << "11.12.不定长字符串类-运算符重载-等于号" << endl;


	if (s2 == s1){
		cout << "equal";
	}else{
		cout << "not equal";
	}

}
