//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////HSV颜色模式 H:色调 0-360 S:饱和度 0-1 V:亮度 0-1
//// 语法:COLORREF HSVtoRGB(float H, float S, float V);
//
//
//// 基本框架
//int main()
//{
//	float Pi = 3.1415926; // 圆周率
//	initgraph(600, 600);  // 初始化窗口大小宽600，高600
//
//	// 自定义圆的参数
//	int centerX = 300; // 圆心x坐标
//	int centerY = 300; // 圆心y坐标
//	int radius = 300;  // 半径
//
//
//
//	//以圆和角度来绘制扇形 圆和扇形绘制的参数关联 方便参数同步一致
//	//可以通过改变圆的参数来改变扇形的参数
//	int left = centerX - radius;   // 左上角x坐标
//	int top = centerY - radius;	   // 左上角y坐标
//	int right = centerX + radius;  // 右下角x坐标
//	int bottom = centerY + radius; // 右下角y坐标
//
//	//绘制HSV色环
//	int step = 1;//步长
//	COLORREF color;//定义HSV颜色变量
//	for (int i = 0; i < 360; i += step)
//	{
//		Sleep(10);
//		color = HSVtoRGB(i, 1, 1); // 将HSV色环转换为RGB色环
//		setfillcolor(color); // 设置填充颜色
//		solidpie(left, top, right, bottom, i * Pi / 180, (i + step) * Pi / 180); // 绘制扇形 起始角度 结束角度
//	}
//
//
//
//	_getch();	  // 暂停窗口
//	closegraph(); // 关闭窗口
//
//	return 0;
//}
