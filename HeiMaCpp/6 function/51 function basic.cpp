#include <iostream>
using namespace std;
// �����Ļ���ʹ��

int add(int num1, int num2) // num1 num2Ϊ�β� ��ʽ�ڴ�
{
	int sum = num1 + num2;
	return sum;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = add(a, b); // abΪʵ��
	cout << c << endl;

	return 0;
}
