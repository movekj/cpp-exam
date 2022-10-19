//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 14. 定义一个字符串类String，用来存放不定长的字符串，重载运算符"<"，用于两个字符串的小于的比较运算。初值自拟。



#include <iostream>
#include <cstring>
using namespace std;

class String{
private:
	char *p;
public:
	String(char * s){
		p = s;
	};
	int operator<(String s){
		if ((strcmp(this->p, s.p)) < 0 ){
			return 1;
		}
		return 0;
	}


};


int main13(){
	cout << "13.不定长字符串类-运算符重载-小于号" << endl;
	String s1 = String("ssssss");
	String s2 = String("sssss");
	if (s1 < s2){
		cout << "lt";
	}else{
		cout << "not lt";
	}

}
