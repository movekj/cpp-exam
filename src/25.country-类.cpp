#include <iostream>
#include <string>
using namespace std;



//16．定义一个国家基类Country，包含国名、首都、人口等属性，派生出省类Province，增加省会城市、人口数量属性。


class Country{
protected:
	string name;
	string capital;
	unsigned  int population;
public:
	Country(string n, string c, unsigned int cp){
		name = n;
		capital = c;
		population = cp;
	}
	void display(){
		cout << "国家名称: " << name << endl;
		cout << "国家首都: " << capital << endl;
		cout << "国家人口: " << population << endl;
	}
};
class Province: public Country{
private:
	string province_capital;
	int province_population;
public:
	Province(string n, string c, unsigned int cp,  string pc,  int pp ): Country(n, c, cp), province_population(pp), province_capital(pc){
	}
	void display(){
		Country::display();
		cout << "省会: " << province_capital << endl;
		cout << "省人口: " << province_population << endl;
	}

};

int main25(){
	cout << "25.country-类.cpp" << endl;
	Country c1("中国", "北京", 1700000000);
	c1.display();
	cout << endl;
	Province p1("中国", "河北", 1700000000, "石家庄", 90000000);
	p1.display();
}
