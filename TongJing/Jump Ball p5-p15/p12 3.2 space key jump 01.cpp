//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////���ո��С����Ծ
////1.������ܲ�������
//
//int main()
//{
//	float width, height;
//	width=600;//���ڿ��
//	height=400;//���ڸ߶�
//	initgraph(width, height);//��ʼ������
//
//	float ball_x, ball_y, ball_radius;
//	ball_radius = 20;//С��뾶
//	ball_x = width / 4;//С���ʼλ��
//	ball_y = 0;//С���ʼλ���ڵ����ϰѰ뾶����
//
//	float ball_vy,gravity;
//	ball_vy = 0;//С���ʼ�ٶ�
//	gravity = 0.5;//�������ٶ�
//
//	while (1)
//	{
//		ball_vy += gravity;//С���ٶ������������ٶ�
//		ball_y += ball_vy;//С��λ�������ٶ�
//		//���С���ڵ����ϣ�������С���ٶ�
//		if (ball_y >=height-ball_radius)
//		{
//			ball_vy = 0;//С���ʼ���ٶ�����
//			ball_y = height-ball_radius;//С��λ�ûص�������
//		}
//			cleardevice();//����
//			fillcircle(ball_x, ball_y, ball_radius);//��С��
//			Sleep(10);//��ʱ10����
//			//�ж��Ƿ��¿ո��
//	
//		
//	}
//
//
//
// 
//	_getch();
//	closegraph();
//	return 0;
//}