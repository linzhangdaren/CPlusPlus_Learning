//�������ɲ�ѯ�ڴ�:sizeof(arr)
//�����׵�ַ

#include<iostream>
using namespace std;

int main()
{
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "ռ���ڴ�ռ�Ϊ " << sizeof(arr) << endl;
	cout << "��һ��ռ���ڴ� " << sizeof(arr[0]) << endl;
	cout << "��һ��Ԫ��ռ���ڴ�Ϊ " << sizeof(arr[0][0]) << endl;

	cout << "��������Ϊ " << sizeof(arr) / sizeof(arr[0]) << endl;//�ܿռ��С���Ե�һ�еĴ�С��������
	cout << "��������Ϊ" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//һ�еĿռ��С����һ��Ԫ�ش�С����������

	//�鿴�׵�ַ(int)ʮ����ת��
	cout << (int)arr << endl;
	//��ά�����һ���׵�ַ
	cout << (int)arr[0] << endl;
	//��һ�е�һ�������׵�ַ�ǵü�&ȡַ��
	cout << (int) & arr[0][0] << endl;

	system("pause");
	return 0;
}