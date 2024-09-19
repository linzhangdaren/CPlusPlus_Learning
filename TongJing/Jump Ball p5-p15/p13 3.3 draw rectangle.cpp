//#include <iostream>  
//#include <conio.h>  
//#include <graphics.h>  
//using namespace std;
////绘制矩形 fillrectangle(1,1,1,1);//左上角坐标为(1,1)，右下角坐标为(1,1)
////fillrectangle(rect_left_x, rect_top_y, rect_left_x + rect_width, height);// 绘制矩形
//
//    //rect_left_x(屏幕的四分之三位置),作为整体平移参数
//    // rect_top_y(方块高度=屏幕高度-矩形高度)
//    // rect_left_x+rect_width(固定的左点宽度+矩形宽度)
//    // height(右下角y坐标贴着底部)
//
//int main()
//{
//    //窗口初始化
//    float width, height;
//    width = 600; // 窗口宽度  
//    height = 400; // 窗口高度  
//    initgraph(width, height); // 初始化窗口  
//    
//    //小球初始化
//    float ball_x, ball_y, ball_radius;
//    ball_radius = 20; // 小球半径  
//    ball_x = width / 4; // 小球初始位置  
//    ball_y = 0; // 小球初始位置在地面上  
//    //小球动态参数
//    float ball_vy, gravity;
//    ball_vy = 0; // 小球初始速度  
//    gravity = 1; // 增加重力加速度
//
//    //矩形初始化
//    float rect_left_x, rect_top_y, rect_width, rect_heigh;
//    //固定右下角点坐标,以此推出左上角坐标
//    //rect_left_x(屏幕的四分之三位置),
//    // rect_top_y(方块高度=屏幕高度-矩形高度)
//    // rect_left_x+rect_width(固定的左点宽度+矩形宽度)
//    // height(右下角y坐标贴着底部)
//    rect_width = 20;//矩形宽度
//    rect_heigh = 200;//矩形高度
//    rect_left_x = width*3/4; //矩形左上角x坐标
//    rect_top_y = height - rect_heigh; //矩形左上角y坐标
//    //矩形动态参数
//    float rect_vx;//矩形x方向速度
//    rect_vx = -3; // 矩形初始速度
//    
//
//    while (1)
//    {
//        //按键检测
//        if (_kbhit())
//        {
//            char input = _getch();
//            cout << "您输入的字符是:" << input << endl;
//            if (input == ' ') {
//                ball_vy = -20; // 按空格小球速度反弹
//            }
//        }
//
//        //小球运动
//        ball_vy += gravity; // 小球速度增加重力加速度  
//        ball_y += ball_vy; // 小球位置增加速度  
//        // 如果小球在地面上，则清零小球速度  
//        if (ball_y >= height - ball_radius)
//        {
//            ball_vy = 0; // 小球速度清零  
//            ball_y = height - ball_radius; // 小球位置回到地面上  
//        }
//
//        //矩形运动
//        rect_left_x += rect_vx;
//        //方块超出屏幕则生成新的方块
//        if (rect_left_x < 0) 
//        {
//            rect_left_x = width; //矩形左上角x坐标
//        }
//
//        //生成图形
//        cleardevice(); // 清屏  
//        fillrectangle(rect_left_x, rect_top_y, rect_left_x+ rect_width,height);// 绘制矩形
//        fillcircle(ball_x, ball_y, ball_radius); // 画小球  
//        Sleep(10); // 延时10毫秒  
//    }
//
//    _getch(); // 等待用户输入，防止程序直接退出  
//    closegraph(); // 关闭图形窗口  
//    return 0;
//}