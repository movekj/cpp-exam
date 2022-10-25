#include <iostream>
using namespace std;

//16．定义一个车基类Vehicle，含私有成员speed，weight。派生出自行车类Bicycle，
// 增加high成员；汽车类Car，增加seatnum(座位数)成员。从bicycle和car中派生出摩托车类Motocycle

class Vehicle{
protected:
	double speed;
	double weight;
public:
	Vehicle(double s, double w){
		speed = s;
		weight = w;
	}
	void display(){
		cout << "speed: " << speed << endl;
		cout << "weight: " << weight << endl;
	}
};

class Bicycle: virtual public Vehicle{
protected:
	double high;
public:
	Bicycle(double s, double w, double h): Vehicle(s, w), high(h){
	}
	void display(){
		cout << "high: " << high << endl;
	}
};

class Car: virtual public Vehicle{
protected:
	int seatnum;
public:
	Car(double s, double w, int sn): Vehicle(s, w), seatnum(sn){

	}
	void display(){
		cout << "seatnum: " << seatnum << endl;
	}
};

class Motocycle: public Bicycle, public Car{
public:
	Motocycle(double s, double w, int sn, double h): Bicycle(s, w, h), Car(s, w, sn), Vehicle(s, w){
	}
	void display(){
		Vehicle::display();
		Bicycle::display();
		Car::display();
	}

};
int main26(){
	Motocycle  m1(100, 9000, 30, 3.5);
	m1.display();
}



