//��λ����Ԫ��
//int start = 0;
//int end = sizeof(arr)/sizeof(arr[0])-1
//
// arr    1   2    3   4   5
//�±�	  0   1    2   3   4 
//int temp = arr[strat];
//arr[start] = arr[end];
//arr[end] = temp;



#include<iostream>
using namespace std;
//1����������
int main()
{
	int arr[5] = { 1,2,3,4,5 };

	cout << "��������֮ǰ" << endl;

	for (int i = 0; i < 5; i++)
	{	
		cout << arr[i] << endl;
	}
	//2��ʵ������
	//2.1��¼��ʼ�±�λ��
	//2.2��¼�����±�λ��
	//2.3��ʼ�±�λ��������±�λ�û���
	//2.4��ʼλ��++ ����λ��--
	//2.5ѭ��ִ�У�2.1����ʼλ��>=����λ��

	int start = 0;//��ʼ�±�λ��
	int end = sizeof(arr) / sizeof(0) - 1;//����λ��

		while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	//�����±�
		start++;
		end--;
	}
		cout << "����Ԫ���û���" << endl;

		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << endl;
		}




	system("pause");
	return 0;
}