//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////С�� ������ʵ�������
////���ٶ� float g = 9.8; 9.8���������ٶ�
////����ϵ�� float damping = 0.95;
//
//float main()
//{
//	initgraph(600, 600);
//	float y = 1;//��ʼy����λ��
//	float vy = 0;//�ٶ�,��Ϊ���������ٶ�����vy=0
//	float radius = 20;//Բ��뾶
//	float g = 4.8; //�������ٶ� ̫����Խ���
//	float damping=0.95; //����ϵ��
//		while (1) {
//			vy += g; //���ٶ�
//			y += vy;//�����ٶ�
//
//			//���䵽���ڵײ�����
//			if (y > 600 - radius)//�ж��Ƿ񷴵� ���ڸ߶�+Բ��뾶
//			{
//				vy = -vy*damping;//�����ٶ�*����ϵ��
//			}
//
//			//�����ڴ����ڹ̶�С��λ�ò���������
//			if (y >= 600 - radius) {
//				y=600 - radius;
//			}
//			
//			cleardevice();//����
//			fillcircle(300, y, radius);//��Բ x,y,�뾶
//			Sleep(1);//��ʱ
//		}
//
// 
//_getch();
//closegraph();
//	return 0;
//}