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
		a = s % 10;//��ȡ��λ
		b = s / 10 % 10;//ʮλ
		c = s / 100;//��λ

		if (a*a*a+b*b*b+c*c*c==s)//=Ϊ��ֵ==Ϊ����
		{
			cout << s << endl;//����ֱ��s++
		}		

		s++;
	} while (s < 1000);

	system("pause");
	return 0;
}