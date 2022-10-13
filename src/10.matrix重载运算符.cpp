//============================================================================
// Name        : test.cpp
// Author      : starli
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
// 2．有两个矩阵a和b，均为2行3列。求两个矩阵之和。重载运算符“+”，使之能用于矩阵相加。如c=a+b。初值自拟。


#include <iostream>
#include <string>
using namespace std;

class Matrix{
private:
	int value[2][3] = {0};
public:
	void init(){
		for (int row=0; row<2; row++){
			for (int col=0; col<3; col++){
				cout << "请输入第" << row << "行" << "第" << col << "列的值:" << endl;
				cin >> value[row][col];
			}
		}
	}
	void show(){
		cout << "开始输出数组元素" << endl;
		for (int row=0; row<2; row++){
			for (int col=0; col<3; col++){
				cout << "第" << row << "行" << "第" << col << "列的值为："  << value[row][col] << endl;
			}
		}
	}
	int getVal(int row, int col){
		return value[row][col];
	}
	void setVal(int row, int col, int val){


		value[row][col] = val;
	}

};

Matrix* operator+ (Matrix m1, Matrix m2){
	Matrix *m = new Matrix();
	for (int row=0; row <2; row++){
		for(int col=0; col<3; col++){
			int val = m1.getVal(row, col) + m2.getVal(row, col);\
			m->setVal(row, col, val);
		}
	}
	return m;
}

int main(){
	cout << "10.matrix重载运算符" << endl;
	cout << "开始初始化第一个矩阵" << endl;
	Matrix matrix1 = Matrix();
	matrix1.init();
	matrix1.show();
	cout << "开始初始化第二个矩阵" << endl;
	Matrix matrix2 = Matrix();
	matrix2.init();
	matrix2.show();
	Matrix *matrix3 = matrix1 + matrix2;
	matrix3->show();

}
