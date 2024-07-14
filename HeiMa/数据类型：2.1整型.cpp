//数据类型：1、整型
//数据类型的本意：节省内存空间，避免浪费内存
//shor、int、long、longlong四个整型类别

//取值范围：
//short	     2字节   短 
//int	     4字节   整 
//long	     见 后   长  windows 3字节 linux 4字节 32位 8字节 64字节
//long long	 8字节   长长
// 
// 字节大小区间值：
//8 bit signed - 128 to 127 （1个字节大小）
// 
//short取值范围：16 bit signed - 32, 768 to 32, 767 （2个字节大小）超出赋值会出错
//int  取值范围：32 bit signed - 2, 147, 483, 648 to 2, 147, 483, 647
//long 取值范围：64 bit signed - 9, 223, 372, 036, 854, 775, 808 to 9, 223, 372, 036, 854, 775, 807

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	short a = 10;
//	int b = 10;
//	long c = 10;
//	long long d = 10;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//	//效果一样因为都是整数，只是占用内存空间不一样
//
//	system("pause");
//	return 0;
//}

//超出赋值会出错
#include<iostream>
using namespace std;

int main()
{
	short a = 32769;//超出赋值会出错 - 32, 768 to 32, 767
	cout << "a等于" << a << endl;

	system("pause");
	return 0;

}



