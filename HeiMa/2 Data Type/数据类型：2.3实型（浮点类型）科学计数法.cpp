//�����ͣ�ʵ��) 
//1�������� float  4�ֽ� 7λ��Ч���ְ�����С��
//2��˫���� double 8�ֽ� 15~16λ��Ч����
// 
// ������Ĭ�ϰ�С������˫����
// ��float��ת��˫���ȶ�һ��ת������
// �������ӹ������������׺��f�Ļ�ֱ�Ӿ��϶�Ϊ������
// 
//���� float ���� = 3.14f
//    double ���� = 3.14  

#include<iostream>
using namespace std;

int main()
{
	float a = 10.1234567f;//����7λ������ʾ
	double b = 3.1234567;//ֻ����ʾ6λС������ʹ�ڴ湻����Ҫ���ò�����ʾ

	cout << "a����" << a << endl;
	cout << "floatռ��" << sizeof(a) << "���ֽ�" << endl;
	cout << endl;//����

	cout << "b����" << b << endl;
	cout << "doubleռ��" << sizeof(b) <<"���ֽ�" << endl;


	system("pause");
	return 0;
}