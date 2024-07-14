#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int s = 100;
	
	do
	{
		a = s % 10;//提取个位
		b = s / 10 % 10;//十位
		c = s / 100;//百位

		if (a*a*a+b*b*b+c*c*c==s)//=为赋值==为等于
		{
			cout << s << endl;//不能直接s++
		}		

		s++;
	} while (s < 1000);

	system("pause");
	return 0;
}