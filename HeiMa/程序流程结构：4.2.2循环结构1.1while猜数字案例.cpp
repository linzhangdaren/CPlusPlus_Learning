//�������1��100��֮������֣�
//rand()%100+1;����1������0-99�������Ϊ101������0-100
//�������srand((unsigned int)time(NULL));//ͷ�ļ���Ҫ���#include<ctime>
//��Ҳ²�
//����´���ʾ������ֹ�����С
//����¶ԣ���ϲ���ʤ�������˳���Ϸ

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;//���ʱ�������Ӳſ��Ա���42һ����ֵ
	int x = 0;

	cout << a << endl;//�����������յ���Ҫ����ע��
	cout << "���������²����ֵ" << endl;
	while (1)
	{
		cin >> x;

		if (x > a)
		{
			cout << "���µĹ���" << endl;
		}

		else if (x < a)
		{
			cout << "���µĹ�С" << endl;
		}

		else
		{
			cout << "��ϲ���¶���" << endl;
			break;//�¶Ժ��˳���Ϸ
		}
	}

	system("pause");
	return 0;
}