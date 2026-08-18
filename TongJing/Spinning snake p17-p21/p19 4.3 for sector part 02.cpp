//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////扇形局部  小扇形的颜色组成
//// 基本框架
//int main()
//{
//	float Pi = 3.1415926;//圆周率
//	int sleep = 1500;
//
//	initgraph(600, 600);//初始化窗口大小宽600，高600
//	setbkcolor(RGB(204, 204, 204)); // 设置背景颜色
//	cleardevice();
//	// 自定义圆的参数
//	int centerX = 300; // 圆心坐标
//	int centerY = 300; // 圆心y坐标
//	int radius = 200;  // 半径
//
//	//可以通过改变圆的参数来改变扇形的参数
//	int left = centerX - radius;   // 左上角x坐标
//	int top = centerY - radius;	   // 左上角y坐标
//	int right = centerX + radius;  // 右下角x坐标
//	int bottom = centerY + radius; // 右下角y坐标
//
//
//
//	//小扇形的参数
//	Sleep(sleep);
//	setfillcolor(RGB(0, 240, 220));//设置青色
//	solidpie(left, top, right, bottom, 0, 2 * Pi / 60);//填充扇形
//
//	Sleep(sleep);
//	setfillcolor(RGB(255, 255, 255));//设置白色
//	solidpie(left, top, right, bottom, 2 * Pi / 60, 3 * Pi / 60);//填充扇形
//
//	Sleep(sleep);
//	setfillcolor(RGB(255, 0, 0));//设置红色
//	solidpie(left, top, right, bottom, 3 * Pi / 60, 5 * Pi / 60);//填充扇形
//
//	Sleep(sleep);
//	setfillcolor(RGB(0, 0, 0));//设置黑色
//	solidpie(left, top, right, bottom, 5 * Pi / 60, 6 * Pi / 60);//填充扇形
//
//	_getch();	  // 暂停窗口
//	closegraph(); // 关闭窗口
//
//	return 0;
//}
