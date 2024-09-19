//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////小球 按照真实物理掉落
////加速度 float g = 9.8; 9.8是重力加速度
////阻尼系数 float damping = 0.95;
//
//float main()
//{
//	initgraph(600, 600);
//	float y = 1;//初始y坐标位置
//	float vy = 0;//速度,因为有重力加速度所以vy=0
//	float radius = 20;//圆球半径
//	float g = 4.8; //重力加速度 太快可以降低
//	float damping=0.95; //阻尼系数
//		while (1) {
//			vy += g; //加速度
//			y += vy;//下落速度
//
//			//下落到窗口底部反弹
//			if (y > 600 - radius)//判断是否反弹 窗口高度+圆球半径
//			{
//				vy = -vy*damping;//反弹速度*阻尼系数
//			}
//
//			//限制在窗口内固定小球位置不掉出窗口
//			if (y >= 600 - radius) {
//				y=600 - radius;
//			}
//			
//			cleardevice();//清屏
//			fillcircle(300, y, radius);//画圆 x,y,半径
//			Sleep(1);//延时
//		}
//
// 
//_getch();
//closegraph();
//	return 0;
//}