//�ֱ������λͬѧ���ܷ���

#include<iostream>
using namespace std;

int main()
{
	int scores[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	//cout << scores[0][0] << " ";
	//cout << scores[0][1] << " ";
	//cout << scores[0][2] << endl;
	//cout << scores[1][0] << " ";
	//cout << scores[1][1] << " ";
	//cout << scores[1][2] << endl;
	//cout << scores[2][0] << " ";
	//cout << scores[2][1] << " ";
	//cout << scores[2][2] << endl;

	string names[3] = { "����","����","����" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << names[i] << "���ܷ�Ϊ��" << sum << endl;
		//cout << "�� " << i + 1 << "���˵��ܷ�Ϊ��" << sum << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
