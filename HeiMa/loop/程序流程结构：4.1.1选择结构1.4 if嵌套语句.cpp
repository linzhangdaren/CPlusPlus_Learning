//�������̽ṹ��1��ѡ��ṹ1.4 ifǶ�����
//�����������������600��Ϊ��ѧһ���ߣ�����Ļ�����
// �����600��һ���Ļ����ϴ���700�־��Ǳ��󣬴���650�����廪������600���˴�
//if(�����ı���ֵ >xxx)//���ﲻ�ܼӷֺţ������������������ݣ������ڷ񶼻�ִ��
//{
//	cout << "��ϲ���ϴ�ѧ" << endl;
//	if (�����ı���ֵ > 700)
//	{
//		cout << "���ܿ��뱱��" << endl;
//	}
//	else if (�����ı���ֵ > 650)
//	{
//		cout << "���ܿ����廪" << endl;
//	}
//	else
//	{
//		cout << "���ܿ����˴�" << endl;
//	}
//		
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
	int qh = 700;
	int bd = 650;
	int rm = 600;
	int b = 500;
	int c = 300;
	int f = 0;

	cout << "���������ķ���" << endl;
	cin >> f;
	cout << "������ķ���Ϊ" << f << "��" << endl;

	if (f >= a)
	{
		cout << "��ϲ������һ����ѧ" << endl;
		if (f >= qh)
		{
			cout << "���ܿ����廪��ѧ" << endl;
		}

		else if (f >= bd)
		{
			cout << "���ܿ��뱱��" << endl;
		}
		
		else
		{
			cout << "���ܿ��������ѧ" << endl;
		}
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