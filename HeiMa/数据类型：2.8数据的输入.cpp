//�������� �Ի�����������
//������cin>>������
//˵����coutΪ��� c out
//       cinΪ���� c in
//ע�����

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1 ����
	int a = 0;
	cout << "������������������,��������밴�س���" << endl;
	cin >> a;
	cout << "�������ֵΪ��" << a << endl;

	//2 ����
	double b = 0;
	cout << "����������С�����ַ�����������밴�س�" << endl;
	cin >> b;
	cout << "�������ֵΪ��" << b << endl;

	//3 �ַ�
	char c = 'a';
	cout << "���������뵥���ַ�����������밴�س�" << endl;
	cin >> c;
	cout << "��������ַ�Ϊ��" << c << endl;

	//4 �ַ���
	string d = "����";
	cout << "���������ַ�������������밴�س�" << endl;
	cin >> d;
	cout << "��������ַ���Ϊ��" << d << endl;


	//5 ����:����ֱ�Ӹ�ֵfalse
	bool e = true;
	cout << "������ֵ�����ж���٣���������밴�س�" << endl;;
	cin >> e;
	cout << "�������ֵΪ��" << e << endl;



	system("pause");
	return 0;
}