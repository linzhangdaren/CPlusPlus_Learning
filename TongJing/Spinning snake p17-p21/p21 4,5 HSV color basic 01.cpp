//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////HSV��ɫģʽ H:ɫ�� 0-360 S:���Ͷ� 0-1 V:���� 0-1
//// �﷨:COLORREF HSVtoRGB(float H, float S, float V);
//
//
//// �������
//int main()
//{
//	float Pi = 3.1415926; // Բ����
//	initgraph(600, 600);  // ��ʼ�����ڴ�С��600����600
//
//	// �Զ���Բ�Ĳ���
//	int centerX = 300; // Բ��x����
//	int centerY = 300; // Բ��y����
//	int radius = 300;  // �뾶
//
//
//
//	//��Բ�ͽǶ����������� Բ�����λ��ƵĲ������� �������ͬ��һ��
//	//����ͨ���ı�Բ�Ĳ������ı����εĲ���
//	int left = centerX - radius;   // ���Ͻ�x����
//	int top = centerY - radius;	   // ���Ͻ�y����
//	int right = centerX + radius;  // ���½�x����
//	int bottom = centerY + radius; // ���½�y����
//
//	//����HSVɫ��
//	int step = 1;//����
//	COLORREF color;//����HSV��ɫ����
//	for (int i = 0; i < 360; i += step)
//	{
//		Sleep(10);
//		color = HSVtoRGB(i, 1, 1); // ��HSVɫ��ת��ΪRGBɫ��
//		setfillcolor(color); // ���������ɫ
//		solidpie(left, top, right, bottom, i * Pi / 180, (i + step) * Pi / 180); // �������� ��ʼ�Ƕ� �����Ƕ�
//	}
//
//
//
//	_getch();	  // ��ͣ����
//	closegraph(); // �رմ���
//
//	return 0;
//}
