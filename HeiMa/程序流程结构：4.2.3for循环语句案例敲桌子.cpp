//for �����Ӱ���
//1-100,��λʮλ����7��������7�ı����ʹ�ӡ�����ӣ�����ֱ�������ӡ


#include<iostream>
using namespace std;

int main()
{
	for (int a = 1; a <= 100; a++)
	{
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7)
		{
			cout << a << " ��������"  << endl;
		}
		else
		{
			cout << a << endl;
		}
	}

	system("pause");
	return 0;
}
