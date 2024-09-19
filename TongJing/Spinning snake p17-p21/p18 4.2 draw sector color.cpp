#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
// 上色 color
// RGB(255, 0, 0) Red,Green,Blue//可以代入以下参数值里如: setlinecolor(RGB(255, 0, 0));
// setbkcolor(WHITE); // 设置背景颜色为白色
// setlinecolor(RED); // 设置画笔颜色为红色
// setfillcolor(GREEN);	// 设置填充颜色为绿色
// 基本框架
int main()
{
	float Pi = 3.1415926; // 圆周率
	initgraph(600, 600);  // 初始化窗口大小宽600，高600

	// 设置颜色
	setbkcolor(WHITE); // 设置背景颜色要清屏不然不生效
	cleardevice();	   // 清除图形设备内容，应用背景色

	// 自定义圆的参数
	int centerX = 300; // 圆心x坐标
	int centerY = 300; // 圆心y坐标
	int radius = 200;  // 半径
	setlinecolor(RED); // 设置画笔颜色为红色

	//绘制非填充的圆圈
	circle(centerX, centerY, radius); // 绘制圆 圆心坐标（300，300） 半径200

	//以圆和角度来绘制扇形 圆和扇形绘制的参数关联 方便参数同步一致
	//可以通过改变圆的参数来改变扇形的参数
	int left = centerX - radius;   // 左上角x坐标
	int top = centerY - radius;	   // 左上角y坐标
	int right = centerX + radius;  // 右下角x坐标
	int bottom = centerY + radius; // 右下角y坐标
	setfillcolor(GREEN);		  // 设置填充颜色为绿色

	// 绘制填充的扇形
	// solidpie(0, 0, 600, 600, Pi / 6, Pi / 2); // 绘制扇形 起始角度30度 结束角度90度
	solidpie(left, top, right, bottom, Pi / 6, Pi / 2); // 绘制扇形 起始角度30度 结束角度90度

	_getch();	  // 暂停窗口
	closegraph(); // 关闭窗口

	return 0;
}
