#include <iostream>
using namespace std;


//写一个乘法函数
int Multiply(int a, int b) {
	return a * b;
}
//结果输出的函数
void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	cout << result << endl;

}

//写成一个函数 直接把以上俩个函数合并
void Multiply2(int a, int b) {
	cout << a * b << endl;
}


int main() {

	//每次调用都需要重复很多次 可以把重复的代码再次写成一个函数见09.1Function.cpp
	//或着直接写成一个函数

	MultiplyAndLog(1, 2);
	MultiplyAndLog(3, 4);
	Multiply2(5, 6);


	return 0;
}