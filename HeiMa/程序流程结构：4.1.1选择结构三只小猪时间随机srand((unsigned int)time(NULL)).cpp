//srand((unsigned int)time(NULL));//ʱ��������ӣ���Ҫͷ�ļ�#include<ctime>
//rand() % 100 + 1;//�����

#include<iostream>
using namespace std;
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));
	int m = rand() % 100 + 1;
	int x = 0;
	cout << "���������µ�����" << endl;

	while (1)
	{
		cin >> x;
		if (x > m)
		{
			cout << "���µĹ���" << endl;
		}
		else if (x < m)
		{
			cout << "���µĹ�С" << endl;
		}
		else
		{
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}
	

	system("pause");
	return 0;
}