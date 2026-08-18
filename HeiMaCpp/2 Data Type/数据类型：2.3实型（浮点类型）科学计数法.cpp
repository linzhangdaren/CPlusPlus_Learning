//浮点型（实型) 
//1、单精度 float  4字节 7位有效数字包括非小数
//2、双精度 double 8字节 15~16位有效数字
// 
// 编译器默认把小数当做双精度
// 用float会转换双精度多一步转换工作
// 所以增加工作量，如果在缀加f的话直接就认定为单精度
// 
//案例 float 变量 = 3.14f
//    double 变量 = 3.14  

#include<iostream>
using namespace std;

int main()
{
	float a = 10.1234567f;//超过7位数不显示
	double b = 3.1234567;//只能显示6位小数，即使内存够，需要配置才能显示

	cout << "a等于" << a << endl;
	cout << "float占用" << sizeof(a) << "个字节" << endl;
	cout << endl;//换行

	cout << "b等于" << b << endl;
	cout << "double占用" << sizeof(b) <<"个字节" << endl;


	system("pause");
	return 0;
}