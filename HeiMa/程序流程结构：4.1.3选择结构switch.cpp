//switch (�������ַ���)  ��ְ��� switchĿ¼����������Ч�ʸ�
// //{
////	case ���1��ִ�����; break;
//		case ���2��ִ�����; braak;
//			....
//		default:ִ�����; break;
//}

#include<iostream>
using namespace std;

int main()
{
	int f = 0;

	cout << "�����Ӱ���" << endl;
	cin >> f;
	cout << "����ķ�Ϊ" << f << endl;

	switch (f)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;
	case 9:
		cout << "��Ϊ��Ӱһ��" << endl; break;
	default:
		cout << "����Ϊ����Ƭ" << endl; break;

	}

	system("pause");
	return 0;
}