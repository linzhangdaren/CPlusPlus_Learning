//逻辑运算符
//非		!	！a		如果a为假, 则!a为真; 如果a为真, 则!a为假。（真变假，假变真）
//与		&&	a&b 	如果a和b都为真, 则结果为真, 否则为假。		(同真为真，其余为假）
//或		||	a||b	如果a和b有一个为真, 则结果为真, 二者都为假时, 结果为假。（同假为假，其余为真）
//注意：与、或值加括号（）

#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 0;

	cout << !a << endl;//		真变假，假变真
	cout << !!a << endl;//		可以多加态！！！！符号

	cout << (a && b) << endl;//	同真为真，其余为假

	cout << (a || b) << endl;//	同假为假，其余为真

	system("pause");
	return 0;
}