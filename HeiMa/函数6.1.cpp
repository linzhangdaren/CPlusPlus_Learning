//函数主体结构 调用add函数：函数名称(参数);

#include<iostream>;
using namespace std;

int add(int num1,int num2)
{
	int sum = num1 + num2;
	return sum;
}




int main()
{	
	int a = 10;
	int b = 20;
	int c = add(a, b);//调用add函数：函数名称（参数）
	cout << c << endl;

	system("pause");
	return 0;
}
