//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
//// С��ͷ������ײ��� collision detection
//
//int main()
//{
//	// ���ڳ�ʼ��
//	float width, height;
//	width = 600;              // ���ڿ��
//	height = 400;             // ���ڸ߶�
//	initgraph(width, height); // ��ʼ������
//
//	// С���ʼ��
//	float ball_x, ball_y, ball_radius;
//	ball_radius = 20;   // С��뾶
//	ball_x = width / 4; // С���ʼλ��
//	ball_y = 0;         // С���ʼλ���ڵ�����
//	// С��̬����
//	float ball_vy, gravity;
//	ball_vy = 0; // С���ʼ�ٶ�
//	gravity = 1; // �����������ٶ�
//
//	// ���γ�ʼ��
//	float rect_left_x, rect_top_y, rect_width, rect_height;
//	// �̶����½ǵ�����,�Դ��Ƴ����Ͻ�����
//	// rect_left_x(��Ļ���ķ�֮��λ��),
//	//  rect_top_y(����߶�=��Ļ�߶�-���θ߶�)
//	//  rect_left_x+rect_width(�̶��������+���ο��)
//	//  height(���½�y�������ŵײ�)
//	rect_width = 20;                   // ���ο��
//	rect_height = 200;                 // ���θ߶�
//	rect_left_x = width * 3 / 4;       // �������Ͻ�x����
//	rect_top_y = height - rect_height; // �������Ͻ�y����//���Ӧ��д��ѭ����,��Ϊÿ�η���߶��������
//	// ���ζ�̬����
//	float rect_vx; // ����x�����ٶ�
//	rect_vx = -3;  // ���γ�ʼ�ٶ�
//
//	while (1)
//	{
//		// �������¼�
//		if (_kbhit())
//		{
//			char input = _getch();
//			cout << "��������ַ���:" << input << endl;
//			if (input == ' ')
//			{
//				ball_vy = -20; // ���ո�С���ٶȷ���
//			}
//		}
//		// С���˶�
//		ball_vy += gravity; // С���ٶ������������ٶ�
//		ball_y += ball_vy;  // С��λ�������ٶ�
//		// ���С���ڵ����ϣ�������С���ٶ�
//		if (ball_y >= height - ball_radius)
//		{
//			ball_vy = 0;                   // С���ٶ�����
//			ball_y = height - ball_radius; // С��λ�ûص�������
//		}
//
//		// �����˶�
//		rect_left_x += rect_vx;
//		// ���鳬����Ļ�������µķ���
//		if (rect_left_x < 0)
//		{
//			rect_left_x = width; // �������Ͻ�x����
//			rect_height = rand() % int(height / 4) + height / 4; //���ȡֵ��Χ�Ǵ��ڸ߶ȵ�1/5��1/5+1/5
//			//rect_vx = rand() / FLOAT(RAND_MAX) * 4 - 7; // ��������ٶ�ֵΪ -7 �� -3
//		}
//
//		// ��ײ���
//		if ((rect_left_x <= ball_x + ball_radius)
//			&& (rect_left_x + rect_width >= ball_x - ball_radius)
//			&& (height - rect_height <= ball_y + ball_radius)) // Ӧ����+��
//		{
//			// �����ײ������ٶ�
//			Sleep(20);
//		}
//
//		// ���ƾ��κ�С��
//		cleardevice();                                                            //  ����
//		fillrectangle(rect_left_x, height - rect_height, rect_left_x + rect_width, height); // ���ƾ���
//		fillcircle(ball_x, ball_y, ball_radius);                                  // ��С��
//		Sleep(1);                                                                 // ��ʱ10����
//	}
//
//	_getch();     // �ȴ��û����룬��ֹ����ֱ���˳�
//	closegraph(); // �ر�ͼ�δ���
//	return 0;
//}