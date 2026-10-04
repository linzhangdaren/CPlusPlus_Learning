#include <iostream>
using namespace std;


//写一个乘法函数
int Multiply(int a, int b) {
	return a * b;
}

int main() {

	//每次调用都需要重复很多次 可以把重复的代码再次写成一个函数见09.1.cpp
	int result = Multiply(1, 2);
	cout << result << endl;

	int result1 = Multiply(3, 4);
	cout << result1 << endl;

	int result2 = Multiply(5, 6);
	cout << result2 << endl;


	return 0;
}