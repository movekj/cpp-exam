/*
 ============================================================================
 Name        : testc.c
 Author      : starli
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//C++运算符重载形式——成员函数or友元函数  https://cloud.tencent.com/developer/article/1176389


//1．定义盒子Box类，要求具有以下成员：长、宽、高分别为x,y,z，可设置盒子形状；可计算盒子体积；可计算盒子的表面积。
//2．有两个长方柱，其长、宽、高分别为：（1）30，20，10；（2）12，10，20。分别求他们的体积。编一个基于对象的程序，在类中用带参数的构造函数。
//2．有两个长方柱，其长、宽、高分别为：（1）12，20，25；（2）10，30，20。分别求他们的体积。编一个基于对象的程序，且定义两个构造函数，其中一个有参数，一个无参数。
//2．声明一个类模板，利用它分别实现两个整数、浮点数和字符的比较，求出大数和小数。
//2．建立一个对象数组，内放5个学生的数据（学号、成绩），用指针指向数组首元素，输出第1，3，5个学生的数据。初值自拟。
//2．建立一个对象数组，内放5个学生的数据（学号、成绩），设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生中成绩最高者，并输出其学号。初值自拟。
//
//2．用new建立一个动态一维数组，并初始化int[10]={1,2,3,4,5,6,7,8,9,10},用指针输出，最后销毁数组所占空间。
//2．定义一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。将运算符函数重载为非成员、非友元的普通函数。编写程序，求两个复数之和。初值自拟。
//2．定义一个复数类Complex，重载运算符“＋”，“—”，使之能用于复数的加，减运算，运算符重载函数作为Complex类的成员函数。编程序，分别求出两个复数之和，差。初值自拟。
//2．定义一个复数类Complex，重载运算符 “*”，“/”，使之能用于复数的乘，除。运算符重载函数作为Complex类的成员函数。编程序，分别求出两个复数之积和商。初值自拟。提示：两复数相乘的计算公式为：(a+bi)*(c+di)=(ac-bd)+(ad+bc)i。两复数相除的计算公式为：(a+bi)/(c+di)=(ac+bd)/(c*c+d*d)+(bc-ad) /(c*c+d*d)i。
//2．定义一个复数类Complex，重载运算符“＋”，使之能用于复数的加法运算。参加运算的两个运算量可以都是类对象，也可以其中有一个是整数，顺序任意。例如：c1+c2，i+c1，c1+i均合法（设i为整数，c1，c2为复数）。编程序，分别求两个复数之和、整数和复数之和。初值自拟。
//2．有两个矩阵a和b，均为2行3列。求两个矩阵之和。重载运算符“+”，使之能用于矩阵相加。如c=a+b。初值自拟。
//2．将运算符“＋”重载为适用于复数加法，重载函数不作为成员函数，而放在类外，作为Complex类的友元函数。初值自拟。
//14. 定义一个字符串类String，用来存放不定长的字符串，重载运算符“＝＝”，，用于两个字符串的等于比较运算。初值自拟。
//14. 定义一个字符串类String，用来存放不定长的字符串，重载运算符"<"，用于两个字符串的小于的比较运算。初值自拟。
//16．定义一个字符串类String，用来存放不定长的字符串，重载运算符">"，用于两个字符串的大于的比较运算。初值自拟。
//16．定义一个描述学生基本情况的类，数据成员包括姓名、学号、C++成绩、英语和数学成绩，成员函数包括输出数据，求出总成绩和平均成绩。数据自拟。
//
//16．先建立一个Point（点）类，包含数据成员x，y（坐标点）。以它为基类，派生出一个Circle（圆）类，增加数据成员r（半径），再以Circle类为直接基类，派生出一个Cylinder（圆柱体）类，在增加数据成员h（高）。编写程序，重载运算符“<<”和“>>”，使之能够用于输出以上类对象。
//16．写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形），用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。
//16．定义一个人员类Cperson，包括数据成员：姓名、编号、性别和用于输入输出的成员函数。在此基础上派生出学生类CStudent(增加成绩)和老师类Cteacher(增加教龄)，并实现对学生和教师信息的输入输出。
//    
//1．某商店经销一种货物，货物成箱购进，成箱卖出，购进和卖出时以重量为单位，各箱的重量不一样，因此，商店需要记下目前库存货物的总量，要求把商店货物购进和卖出的情况模拟出来。
//
//2．设计一个Time类，包括三个私有数据成员：hour,minute,sec，用构造函数初始化,内设公用函数display(Date &d),设计一个Date类，包括三个私有数据成员：month,day,year，也用构适函数初始化；分别定义两个带参数的对象t1(12,30,55),d1(3,25,2010)，通过友员成员函数的应用，输出d1和t1的值。
//3. 设计一个Time类，包括三个私有数据成员：hour,minute,sec，用构造函数初始化, ,设计一个Date类，包括三个私有数据成员：month,day,year，也用构适函数初始化；设计一个普通函数display(…),将display分别设置为T ime类和Date类的友元函数，在主函数中分别定义两个带参数的对象t1(12,30,55),d1(3,25,2010)，
//调用desplay,输出年、月、日和时、分、秒。
//4．可以定义点类（Point），再定义一个类（Distance）描述两点之间的距离，其数据成员为两个点类对象，两点之间距离的计算可设计由构造函数来实现。
//5．定义点类（Point），再定义一个函数（Distance）描述两点之间的距离，其数据成员为两个点类对象，将两点之间距离函数声明为Point类的友元函数。
//6．实现重载函数Double(x)，返回值为输人参数的两倍；参数分别为整型、浮点型、双精度型，返回值类型与参数一样。（用类模板实现）
//7．有一个Time类，包含数据成员minute（分）和sec（秒），模拟秒表，每次走一秒，满60秒进一分钟，此时秒又从0开始算。要求输出分和秒的值。初值自拟。
//8．声明一个教师（Teacher）类和一个学生（Student）类，用多重继承的方式声明一个研究生（Graduate）派生类。教师类中包括数据成员name（姓名），age（年龄），title（职称）。学生类中包括数据成员name（姓名），age（年龄），score（成绩）。在定义派生类对象时给出初始化的数据（自已定），然后输出这些数据。初值自拟。
//9．在上题的基础上，在Teacher类和Student类之上增加一个共同的基类Person，如下图所示。作为人员的一些基本数据都放在Person中，在Teacher类和Student类中再增加一些必要的数据（Student类中增加score,Teacher类中增加职称title,Graduate类中增加工资wages）。初值自拟。
//10. 写一个程序，定义抽象类型Shape，由他派生三个类：Circle（圆形），Rectangle（矩形），Trapezoid（梯形），用一个函数printArea分别输出三者的面积，3个图形的数据在定义对象是给定。
//11．声明一个Shape抽象类，在此基础上派生出Rectangle和Circle类，二者都有GetArea( )函数计算对象的面积，GetPerim( )函数计算对象的周长。
//   12．分别用成员函数和友元函数重载运算符，使对实型的运算符“-”适用于复数运算。
//13．分别用成员函数和友元函数重载运算符，使对实型的运算符“+” 适用于复数运算。
//14．分别用成员函数和友元函数重载运算符，使对实型的运算符“*” 适用于复数运算。提示：两复数相乘的计算公式为：(a+bi)*(c+di)=(ac-bd)+(ad+bc)i。
//15．分别用成员函数和友元函数重载运算符，使对实型的运算符“/” 适用于复数运算。
//提示：两复数相除的计算公式为：(a+bi)/(c+di)=(ac+bd)/(c*c+d*d)+(bc-ad) /(c*c+d*d)i。
//16．定义一个国家基类Country，包含国名、首都、人口等属性，派生出省类Province，增加省会城市、人口数量属性。
//16．定义一个车基类Vehicle，含私有成员speed，weight。派生出自行车类Bicycle，增加high成员；汽车类Car，增加seatnum(座位数)成员。从bicycle和car中派生出摩托车类Motocycle。
//16．把定义平面直角坐标系上的一个点的类Cpoint作为基类，派生出描述一条直线的类Cline,再派生出一个矩形类Crect。要求成员函数能求出两点间的距离、矩形的周长和面积。设计一个完整程序。数据自拟。
//16．声明一个哺乳动物Mammal类，再由此派生出狗Dog类，二者都定义Speak( )成员函数，基类中定义为虚函数。声明一个Dog类的对象，调用Speak()函数，观察运行结果。
//16．定义一个抽象类Cshape，包含纯虚函数Area(用来计算面积)和SetData(用来重设形状大小)。然后派生出三角形Ctriangle类、矩形Crect类、圆Ccircle类，分别求其面积。最后定义一个CArea类，计算这几个形状的面积之和，各形状的数据通过Carea类构造函数或成员函数来设置。编写一个完整程序。
//1．商店销售某一商品，商店每天公布统一的折扣（discount）。同时允许销售人员在销售时灵活掌握售价（price），在此基础上，对一次购10件以上者，还可以享受9.8折优惠。现已知当天3名销货员的销售情况为：
//销货员号（num）          销货件数（quantity）            销售单价（price）
//       101                        5                         23.5
//       102                        12                        24.56
//       103                        100                       21.5
//请编程序，计算出当日此商品的总销售款sum，以及每件商品的平均售价。要求用静态数据成员和静态成员函数。（提示：将折扣discount、总销售款sum和商品销售总件数n声明为静态数据成员，再定义静态成员函数average（求平均售价）和display（输出结果）。
//2．请编写程序，处理一个复数与一个double数相加的运算，结果存放在一个double型的变量d1中，输出d1的值，再以复数形式输出此值。定义Complex（复数）类，在成员函数中包含重载类型转换运算符：operator double（）{ return  real；}。初值自拟。
//3．定义一个Teacher（教师）类和一个Student（学生）类，二者有一部分数据成员是相同的，例如num（号码），name（姓名），sex（性别）。编写程序，将一个Student对象（学生）转换为Teacher（教师）类，只将以上3个相同的数据成员移植过去。可以设想为：一位学生大学毕业了，留校担任教师，他原有的部分数据对现在的教师身份来说仍然是有用的，应当保留并成为其教师的数据的一部分。
//4．有一个Time类，包含数据成员minute（分）和sec（秒），模拟秒表，每次走一秒，满60秒进一分钟，此时秒又从0开始算。要求输出分和秒的值，且对后置自增运算符的重载。
//5．定义一个基类Student（学生），在定义Student类的公用派生类Graduate（研究生），用指向基类对象的指针输出数据。为减少程序长度，在每个类中只设很少成员。学生类只设num(学号)，name(姓名)和score(分数)3个数据成员，Gradute类只增加一个数据成员pay(工资)。具体初始化数据自己设定。
//
//6．分别定义Teacher（教师）类和Cadre（干部）类，采用多重继承方式有这两个类派生出新类Teacher_Cadre（教师兼干部）。要求：
//(1)、在两个基类中的包含姓名、年龄、性别、地址、电话、等数据成员。
//(2)、在Teacher类中包含数据成员title（职称），在Cadre类中还包含数据成员post（职务），在Teacher_Cadre类中还包含数据成员wages（工资）。
//(3)、对两个基类中的姓名、年龄、性别、职称、地址、电话等数据成员用相同的名字，在引用数据成员时制定作用域。
//(4)、在类中声明成员函数，在类外定义成员函数 。
//(5)、在派生类Teacher_cadre的成员函数show中调用Teacher类中的display函数。输出姓名，年龄，性别，职称，地址，电话，然后再用cout语句输出职务与工资。
//
//7．写一个程序，定义抽象类型Shape，由他派生五个类：Circle（圆形），Square（正方形），Rectangle（矩形），Trapezoid（梯形），Triangle（三角形）。用虚函数分别计算几种图形的面积，并求它们的和。要求用基类指针数组，使它的每一个元素指向一个派生类的对象。
//
//8. 写一个程序，定义抽象类型Shape，由他派生五个类：Circle（圆形），Square（正方形），Rectangle（矩形），Trapezoid（梯形），Triangle（三角形）。用虚函数分别计算几种图形的面积，并求它们的和。要求用基类指针数组，使它的每一个元素指向一个派生类的对象。
//9．编程序实现以下功能：
//(1)按职工号由小到大的顺序将5个员工的数据(包括号码,姓名,年龄,工资)输出到磁盘文件中保存
//(2)从键盘输入两个员工的数据(职工号大于已有的职工号)，增加到文件的末尾。
//(3)输入文件中全部职工的数据
//(4)从键盘输入一个号码，从文件中查找有无此职工号，如有则显示此职工是第几个职工，以及此职工的全部数据。如没有，就输出“无此人”。可以反复多次查询，如果输入查找的职工号是0，就结束查询。
//10．给出三角形的三边 a,b,c求三角形的面积。只有a+b>c,B+c>a,a+c>b时才能构成三角形。设置异常处理，对不符合三角形条件的输出警告信息，不予计算。

#include <stdio.h>
#include <stdlib.h>

int mainc(void)
{
    setvbuf(stdout, NULL, _IONBF, 0);
    char a,b,c;
    printf("请输入三个字符：");
    scanf("%c%c%c",&a,&b,&c);
    printf("%c,%c,%c\n", a,b,c);
    return 0;
}
