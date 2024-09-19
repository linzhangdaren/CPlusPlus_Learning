//#include <iostream>  
//#include <conio.h> // 注意：这不是标准C++库，但如果您的环境支持它，那么可以保留  
//#include <graphics.h> // 同样，这也是特定环境的库  
//using namespace std;
//
//// 小球抛物线运动，包括反弹  
//int main() // 主函数应该是int类型  
//{
//    initgraph(600, 600);
//
//    float x = 100; // 初始x坐标位置  
//    float y = 100; // 初始y坐标位置  
//    float radius = 20; // 圆球半径  
//
//    float vx = 5; // x方向初速度  
//    float vy = 0; // y方向初速度，因为有重力加速度所以vy=0  
//
//    float g = 0.5; // 重力加速度，调整为更小的值以获得更自然的运动  
//    float damping = 0.95; // 阻尼系数，设置为小于1的值以模拟能量损失  
//
//    while (!_kbhit()) { // 使用_kbhit()来检测是否有按键被按下，以便退出循环  
//        vy += g; // 加速度  
//        x += vx; // x方向运动  
//        y += vy; // 下落速度  
//
//        // 反弹逻辑  
//        if (y > (600 - radius)) { // 下落到窗口底部反弹  
//            vy = -vy * damping; // 反弹速度*阻尼系数  
//            y = 600 - radius; // 防止小球超出底部边界  
//        }
//        if (x > (600 - radius) || x <= radius) { // 碰到左右边界反弹  
//            vx = -vx * damping; // 反弹速度*阻尼系数  
//            if (x > 600 - radius) x = 600 - radius; // 防止小球超出右边界  
//            if (x <= radius) x = radius; // 防止小球超出左边界  
//        }
//
//        cleardevice(); // 清屏  
//        fillcircle(int(x), int(y), int(radius)); // 画圆，注意将float转换为int  
//        Sleep(10); // 稍微增加延时以获得更平滑的动画效果  
//    }
//
//    cin.get(); // 等待用户按键
//    closegraph(); // 关闭图形模式  
//    return 0;
//}
