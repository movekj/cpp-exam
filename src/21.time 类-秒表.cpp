#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

// 7．有一个Time类，包含数据成员minute（分）和sec（秒），模拟秒表，每次走一秒，满60秒进一分钟，此时秒又从0开始算。要求输出分和秒的值。初值自拟。
class Time{
private:
	int sec = 0;
	int minute = 0;
public:
	void run(){
		cout << "00:00" << endl;
		while (true){
			Sleep(1000);
			sec +=1;
			if (sec == 60){
				minute += 1;
				sec = 0;
			}
			cout << setfill ('0') << setw (2);
			cout << minute <<  ":" << setfill ('0') << setw (2) << sec << endl;;
		}
	}
};

int main21(){
	cout << "21.time 类-秒表" << endl;
	Time time;
	time.run();
}
