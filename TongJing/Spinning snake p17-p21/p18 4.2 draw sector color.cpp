#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
// ��ɫ color
// RGB(255, 0, 0) Red,Green,Blue//���Դ������²���ֵ����: setlinecolor(RGB(255, 0, 0));
// setbkcolor(WHITE); // ���ñ�����ɫΪ��ɫ
// setlinecolor(RED); // ���û�����ɫΪ��ɫ
// setfillcolor(GREEN);	// ���������ɫΪ��ɫ
// �������
int main()
{
	float Pi = 3.1415926; // Բ����
	initgraph(600, 600);  // ��ʼ�����ڴ�С��600����600

	// ������ɫ
	setbkcolor(WHITE); // ���ñ�����ɫҪ������Ȼ����Ч
	cleardevice();	   // ���ͼ���豸���ݣ�Ӧ�ñ���ɫ

	// �Զ���Բ�Ĳ���
	int centerX = 300; // Բ��x����
	int centerY = 300; // Բ��y����
	int radius = 200;  // �뾶
	setlinecolor(RED); // ���û�����ɫΪ��ɫ

	//���Ʒ�����ԲȦ
	circle(centerX, centerY, radius); // ����Բ Բ�����꣨300��300�� �뾶200

	//��Բ�ͽǶ����������� Բ�����λ��ƵĲ������� �������ͬ��һ��
	//����ͨ���ı�Բ�Ĳ������ı����εĲ���
	int left = centerX - radius;   // ���Ͻ�x����
	int top = centerY - radius;	   // ���Ͻ�y����
	int right = centerX + radius;  // ���½�x����
	int bottom = centerY + radius; // ���½�y����
	setfillcolor(GREEN);		  // ���������ɫΪ��ɫ

	// ������������
	// solidpie(0, 0, 600, 600, Pi / 6, Pi / 2); // �������� ��ʼ�Ƕ�30�� �����Ƕ�90��
	solidpie(left, top, right, bottom, Pi / 6, Pi / 2); // �������� ��ʼ�Ƕ�30�� �����Ƕ�90��

	_getch();	  // ��ͣ����
	closegraph(); // �رմ���

	return 0;
}
