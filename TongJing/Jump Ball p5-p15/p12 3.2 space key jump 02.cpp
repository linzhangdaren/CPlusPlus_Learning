//#include <iostream>  
//#include <conio.h>  
//#include <graphics.h>  
//using namespace std;
//
//int main()
//{
//   
//    float width, height;
//    width = 600; // 窗口宽度  
//    height = 400; // 窗口高度  
//    initgraph(width, height); // 初始化窗口  
//
//    float ball_x, ball_y, ball_radius;
//    ball_radius = 20; // 小球半径  
//    ball_x = width / 4; // 小球初始位置  
//    ball_y = 0; // 小球初始位置在地面上  
//
//    float ball_vy, gravity;
//    ball_vy = 0; // 小球初始速度  
//    gravity = 1; // 增加重力加速度
//
//    while (1)
//    {
//        if (_kbhit())
//        {
//            char input = _getch();
//            cout << "您输入的字符是:" << input << endl;
//            if (input ==' ') {
//                ball_vy = -20; // 按空格小球速度反弹
//            }
//        }
//
//        ball_vy += gravity; // 小球速度增加重力加速度  
//        ball_y += ball_vy; // 小球位置增加速度  
//
//        // 如果小球在地面上，则清零小球速度  
//        if (ball_y >= height - ball_radius)
//        {
//            ball_vy = 0; // 小球速度清零  
//            ball_y = height - ball_radius; // 小球位置回到地面上  
//        }
//
//        cleardevice(); // 清屏  
//        fillcircle(ball_x, ball_y, ball_radius); // 画小球  
//        Sleep(10); // 延时10毫秒  
//    }
//
//    _getch(); // 等待用户输入，防止程序直接退出  
//    closegraph(); // 关闭图形窗口  
//    return 0;
//}