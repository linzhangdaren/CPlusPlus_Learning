//ð������
//��������
//����      

//��������=Ԫ�ظ���-1
//�Աȴ���=Ԫ�ظ���-��������-1

#include<iostream>
using namespace std;

int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "����ǰ���" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}


	
	for (int i = 0; i < 9 - 1; i++)//����������=Ԫ�ظ���-1��
	{	
		for (int j = 0; j < 9 - i - 1; j++)//ÿ�ֶԱȴ���=Ԫ�ظ���-ÿ�ִ���-1
		{
			if (arr[j]>arr[j + 1])//�����һ�����֣��ȵڶ������ִ󣬽�����������
			{
				int temp = arr[j]; //��������
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	//���������
	cout << "����ǰ���" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}


	system("pause");
	return 0;
}