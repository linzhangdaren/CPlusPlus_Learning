//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////���ξֲ�  С���ε���ɫ���
//// �������
//int main()
//{
//	float Pi = 3.1415926;//Բ����
//	int sleep = 1500;
//
//	initgraph(600, 600);//��ʼ�����ڴ�С��600����600
//	setbkcolor(RGB(204, 204, 204)); // ���ñ�����ɫ
//	cleardevice();
//	// �Զ���Բ�Ĳ���
//	int centerX = 300; // Բ������
//	int centerY = 300; // Բ��y����
//	int radius = 200;  // �뾶
//
//	//����ͨ���ı�Բ�Ĳ������ı����εĲ���
//	int left = centerX - radius;   // ���Ͻ�x����
//	int top = centerY - radius;	   // ���Ͻ�y����
//	int right = centerX + radius;  // ���½�x����
//	int bottom = centerY + radius; // ���½�y����
//
//
//
//	//С���εĲ���
//	Sleep(sleep);
//	setfillcolor(RGB(0, 240, 220));//������ɫ
//	solidpie(left, top, right, bottom, 0, 2 * Pi / 60);//�������
//
//	Sleep(sleep);
//	setfillcolor(RGB(255, 255, 255));//���ð�ɫ
//	solidpie(left, top, right, bottom, 2 * Pi / 60, 3 * Pi / 60);//�������
//
//	Sleep(sleep);
//	setfillcolor(RGB(255, 0, 0));//���ú�ɫ
//	solidpie(left, top, right, bottom, 3 * Pi / 60, 5 * Pi / 60);//�������
//
//	Sleep(sleep);
//	setfillcolor(RGB(0, 0, 0));//���ú�ɫ
//	solidpie(left, top, right, bottom, 5 * Pi / 60, 6 * Pi / 60);//�������
//
//	_getch();	  // ��ͣ����
//	closegraph(); // �رմ���
//
//	return 0;
//}
