//������Ŀ������ֻС���ж���ֻС������
//˼·��cinֵ��abc
//���a>b 
//	�Ǽ����ж�a>c
//	���a>c 
//	���a���
//	����c���
//�Ǿͼ����ж�b>c
//	���b>c
//	���b���
//	����c���

#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "�������һֻС������" << endl;
	cin >> a;
	cout << "������ڶ�ֻС������" << endl;
	cin >> b;
	cout << "���������ֻС������" << endl;
	cin >> c;
	
	cout << "��һֻС������Ϊ��" << a << endl;
	cout << "�ڶ�ֻС������Ϊ��" << b << endl;
	cout << "����ֻС������Ϊ��" << c << endl;

	if (a > b)//�ж�a�Ƿ����b ����ǵĻ���ô
	{
		if (a > c)
		{
			cout << "��һֻС������" << endl;
		}
		else
		{
			cout << "����ֻС������" << endl;
		}
	}
	else//�������b����a
	{
		if (b > c)
		{
			cout << "�ڶ�ֻС������" << endl;
		}
		else
		{
			cout << "����ֻС������" << endl;
		}
	}

	system("pause");
	return 0;

}