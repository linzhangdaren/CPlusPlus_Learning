//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
//// 扇形的绘制
//// solidpie(
//// 	int left,//左上角x坐标
//// 	int top,//左上角y坐标
//// 	int right,//右下角x坐标
//// 	int bottom,//右下角y坐标
//// 	double stangle,//起始角度
//// 	double endangle)//结束角度
//
//// 基本框架
//int main()
//{
//	float Pi = 3.1415926; // 圆周率
//	initgraph(600, 600);  // 初始化窗口大小宽600，高600
//
//	// 自定义圆的参数
//	int centerX = 100; // 圆心x坐标
//	int centerY = 100; // 圆心y坐标
//	int radius = 100;  // 半径
//
//	//绘制非填充的圆圈
//	circle(centerX, centerY, radius); // 绘制圆 圆心坐标（300，300） 半径200
//
//	//以圆和角度来绘制扇形 圆和扇形绘制的参数关联 方便参数同步一致
//	//可以通过改变圆的参数来改变扇形的参数
//	int left = centerX - radius;   // 左上角x坐标
//	int top = centerY - radius;	   // 左上角y坐标
//	int right = centerX + radius;  // 右下角x坐标
//	int bottom = centerY + radius; // 右下角y坐标
//
//	// 绘制填充的扇形
//	// solidpie(0, 0, 600, 600, Pi / 6, Pi / 2); // 绘制扇形 起始角度30度 结束角度90度
//	solidpie(left, top, right, bottom, Pi / 6, Pi / 2); // 绘制扇形 起始角度30度 结束角度90度
//
//	_getch();	  // 暂停窗口
//	closegraph(); // 关闭窗口
//
//	return 0;
//}
