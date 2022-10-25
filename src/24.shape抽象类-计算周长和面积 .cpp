#include <iostream>;

using namespace std;
// 11．声明一个Shape抽象类，在此基础上派生出Rectangle和Circle类，二者都有GetArea( )函数计算对象的面积，
// GetPerim( )函数计算对象的周长。
class Shape{
	virtual double GetArea () = 0;     //计算面积函数
	virtual double GetPerim () = 0;   //计算周长函数
};

class Rectangle: public Shape{
private:
	double x;
	double y;
public:
	Rectangle(double _x, double _y){
		x = _x;
		y = _y;
	}
	double GetArea(){
		return x * y;
	}
	double GetPerim(){
		return 2*(x+y);
	}
};
class Circle: public Shape{
private:
	double r;
public:
	Circle(double _r){
		r = _r;
	};
	double GetArea(){
		return 3.14 * r * r;
	};

	double GetPerim(){
		return 2 * 3.14 * r;
	}
};


int main24(){
	cout << "24.shape抽象类-计算周长和面积 .cpp" << endl;
	Circle c1(1);
	cout << c1.GetArea() << endl;
	cout << c1.GetPerim()  << endl;
	Rectangle r1(1,1);

	cout << r1.GetArea() << endl;
	cout << r1.GetPerim() << endl;
}
