//�������̽ṹ��1��ѡ��ṹ1.3 if���������
//�����������������600��Ϊ��ѧһ���ߣ�����Ļ�����
//if(����>xxx)//���ﲻ�ܼӷֺţ������������������ݣ������ڷ񶼻�ִ��
//{
//	cout << "��ϲ���ϴ�ѧ" << endl;
//}
// 
//else if//��̥1��2��3
//{
//cout << "xxx" << endl;
//}
// 
//else//��������else��β������ϴ��
//{
// cout<<"xxx"<<endl;
//}


#include<iostream>
using namespace std;

int main()
{
	int a = 600;
	int b = 500;
	int c = 300;
	int f = 0;

	cout << "���������ķ���" << endl;
	cin >> f;
	cout << "������ķ���Ϊ" << f << "��" << endl;

	if (f >= a)
	{
		cout << "��ϲ������һ����ѧ" << endl;
	}

	else if (f >= b)
	{
		cout << "��ϲ�����������ѧ" << endl;
	}

	else if (f >= c)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	
	else
	{
		cout << "���ź������ٽ�����" << endl;
	}

	system("pause");
	return 0;
}