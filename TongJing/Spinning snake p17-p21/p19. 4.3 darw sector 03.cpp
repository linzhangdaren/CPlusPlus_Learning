//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////完整扇形 用offset偏移来循环实现
//// 基本框架
//int main()
//{
//	float Pi = 3.1415926;//圆周率
//	int sleep = 200;
//
//	initgraph(600, 600);//初始化窗口大小宽600，高600
//	setbkcolor(RGB(204, 204, 204)); // 设置背景颜色
//	cleardevice();//清除图形设备内容，应用背景色
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
//	//组件循环
//	float offset = 2;//扇形组件角度偏移值
//	for (int i = 0; i < 20; i++) {
//		//小扇形的参数
//		offset = i * Pi / 10;
//		Sleep(sleep);
//		setfillcolor(RGB(0, 240, 220));//设置青色
//		solidpie(left, top, right, bottom, offset, 2 * Pi / 60 + offset);//填充了Pi的2/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(255, 255, 255));//设置白色
//		solidpie(left, top, right, bottom, 2 * Pi / 60 + offset, 3 * Pi / 60 + offset);//填充了Pi的1/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(255, 0, 0));//设置红色
//		solidpie(left, top, right, bottom, 3 * Pi / 60 + offset, 5 * Pi / 60 + offset);//填充了Pi的2/60
//
//		Sleep(sleep);
//		setfillcolor(RGB(0, 0, 0));//设置黑色
//		solidpie(left, top, right, bottom, 5 * Pi / 60 + offset, 6 * Pi / 60 + offset);//填充了Pi的1/60
//		//一组填充了Pi的6/60,也就是1/10,所以每次需要偏移Pi的1/10(也就是Pi/10)
//		// 第一次偏移0，第二次偏移Pi/10，第三次偏移2Pi/10，第四次偏移3Pi/10，第五次偏移...得出公式offset=i*Pi/10
//		// 从0开始需要10次填满一个Pi(半圆)
//		// 2*Pi(π)才是一个圆那就需要循环20次
//	}
//
//
//	_getch();	  // 暂停窗口
//	closegraph(); // 关闭窗口
//
//	return 0;
//}
