//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////�������� ��offsetƫ����ѭ��ʵ��
//// �������
//int main()
//{
//	float Pi = 3.1415926;//Բ����
//	int sleep = 200;
//
//	initgraph(600, 600);//��ʼ�����ڴ�С��600����600
//	setbkcolor(RGB(204, 204, 204)); // ���ñ�����ɫ
//	cleardevice();//���ͼ���豸���ݣ�Ӧ�ñ���ɫ
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
//	//���ѭ��
//	float offset = 2;//��������Ƕ�ƫ��ֵ
//	for (int i = 0; i < 20; i++) {
//		//С���εĲ���
//		offset = i * Pi / 10;
//		Sleep(sleep);
//		setfillcolor(RGB(0, 240, 220));//������ɫ
//		solidpie(left, top, right, bottom, offset, 2 * Pi / 60 + offset);//�����Pi��2/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(255, 255, 255));//���ð�ɫ
//		solidpie(left, top, right, bottom, 2 * Pi / 60 + offset, 3 * Pi / 60 + offset);//�����Pi��1/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(255, 0, 0));//���ú�ɫ
//		solidpie(left, top, right, bottom, 3 * Pi / 60 + offset, 5 * Pi / 60 + offset);//�����Pi��2/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(0, 0, 0));//���ú�ɫ
//		solidpie(left, top, right, bottom, 5 * Pi / 60 + offset, 6 * Pi / 60 + offset);//�����Pi��1/60
//		//һ�������Pi��6/60,Ҳ����1/10,����ÿ����Ҫƫ��Pi��1/10(Ҳ����Pi/10)
//		// ��һ��ƫ��0���ڶ���ƫ��Pi/10��������ƫ��2Pi/10�����Ĵ�ƫ��3Pi/10�������ƫ��...�ó���ʽoffset=i*Pi/10
//		// ��0��ʼ��Ҫ10������һ��Pi(��Բ)
//		// 2*Pi(��)����һ��Բ�Ǿ���Ҫѭ��20��
//	}
//
//
//	_getch();	  // ��ͣ����
//	closegraph(); // �رմ���
//
//	return 0;
//}
