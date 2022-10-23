#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// 。4．可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，其数据成员为两个点类对象，两点之间距离的计算可设计由构造函数来实现。
class Point{
private:
	double x;
	double y;
public:
	Point(){
		x = 0;
		y = 0;

	};
	Point(double _x, double _y){
		x = _x;
		y = _y;
	};
	double getX(){
		return x;
	};
	double getY(){
		return y;
	}
};
class Distance{
private:
	Point p1;
	Point p2;
	double distance;
public:
	Distance(Point &_p1, Point &_p2){
		p1 = _p1;
		p2 = _p2;
		distance = sqrt((p1.getX() - p2.getX()) * (p1.getX() - p2.getX()) + (p1.getY() - p2.getY()) * (p1.getY() - p2.getY()));

	};
	void setP1(double _x, double _y){
		p1 = Point(_x, _y);
	};
	void setP2(double _x, double _y){
		p2 = Point(_x, _y);

	};
	void display(){
		cout.setf(ios::fixed);
		cout << setprecision(2) << distance << endl;
	}
};



int main20(){
	Point P1(3.0,2.0);
	Point P2;

	Distance d(P1, P2);
	d.display();
}
