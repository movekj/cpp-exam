#include <iostream>

using namespace std;
//1．商店销售某一商品，商店每天公布统一的折扣（discount）。同时允许销售人员在销售时灵活掌握售价（price），
// 在此基础上，对一次购10件以上者，还可以享受9.8折优惠。现已知当天3名销货员的销售情况为：
//销货员号（num）          销货件数（quantity）            销售单价（price）
//       101                        5                         23.5
//       102                        12                        24.56
//       103                        100                       21.5
//请编程序，计算出当日此商品的总销售款sum，以及每件商品的平均售价。要求用静态数据成员和静态成员函数。
//（提示：将折扣discount、总销售款sum和商品销售总件数n声明为静态数据成员，//
// 再定义静态成员函数average（求平均售价）和display（输出结果）。


class Sale{
private:
	int num;  //销货员号
	int quantity; //销货件数
	double price; // 销售单价
	static double discount; //折扣
	static double sum;   //总销售款
	static int n ;  //销售总件数
public:
	Sale(int nu, int q, double p){
		num = nu;
		quantity = q;
		price = p;
		n = n +quantity;
		if (quantity>10){
			sum = sum + quantity * price * 0.98  *( 1- discount);
		}else{
			sum = sum + quantity * price*( 1- discount);
		}
	}
	static double average();
	static void display();
};

double Sale::average(){
	cout << sum << "-" << n << endl;
	return sum/n;
}
void Sale::display(){
	cout << "sum：" << sum << endl;
	cout << "average：" << average() << endl;


}
double Sale::discount = 0.05;
double Sale::sum = 0;
int Sale::n= 0;

int main(){
	Sale s1(101, 5, 23.5);
	s1.display();
	Sale s2(102, 12, 24.56);
	s2.display();
	Sale s3(103,  100, 21.5);
	s3.display();

}
