//����ͳ����������ռ���ڴ�Ĵ�С
//������cout<<sizeof(�������ͻ��߱�����<<endl;
#include<iostream>
using namespace std;

int main()
{
	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << "shortռ���ڴ棺" << sizeof(short) <<"�ֽ�"<< endl;//����sizeof(a)
	cout << "intռ���ڴ棺" << sizeof(int) << "�ֽ�" << endl;//����sizeof(b)
	cout << "longռ���ڴ棺" << sizeof(long) << "�ֽ�" << endl;//����sizeof(c)
	cout << "long longռ���ڴ棺" << sizeof(long long) << "�ֽ�" << endl;//����sizeof(d)

	system("pause");
	return 0;
}