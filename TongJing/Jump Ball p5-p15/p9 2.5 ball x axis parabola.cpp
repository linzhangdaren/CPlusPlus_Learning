//#include <iostream>  
//#include <conio.h> // ע�⣺�ⲻ�Ǳ�׼C++�⣬��������Ļ���֧��������ô���Ա���  
//#include <graphics.h> // ͬ������Ҳ���ض������Ŀ�  
//using namespace std;
//
//// С���������˶�����������  
//int main() // ������Ӧ����int����  
//{
//    initgraph(600, 600);
//
//    float x = 100; // ��ʼx����λ��  
//    float y = 100; // ��ʼy����λ��  
//    float radius = 20; // Բ��뾶  
//
//    float vx = 5; // x������ٶ�  
//    float vy = 0; // y������ٶȣ���Ϊ���������ٶ�����vy=0  
//
//    float g = 0.5; // �������ٶȣ�����Ϊ��С��ֵ�Ի�ø���Ȼ���˶�  
//    float damping = 0.95; // ����ϵ��������ΪС��1��ֵ��ģ��������ʧ  
//
//    while (!_kbhit()) { // ʹ��_kbhit()������Ƿ��а��������£��Ա��˳�ѭ��  
//        vy += g; // ���ٶ�  
//        x += vx; // x�����˶�  
//        y += vy; // �����ٶ�  
//
//        // �����߼�  
//        if (y > (600 - radius)) { // ���䵽���ڵײ�����  
//            vy = -vy * damping; // �����ٶ�*����ϵ��  
//            y = 600 - radius; // ��ֹС�򳬳��ײ��߽�  
//        }
//        if (x > (600 - radius) || x <= radius) { // �������ұ߽練��  
//            vx = -vx * damping; // �����ٶ�*����ϵ��  
//            if (x > 600 - radius) x = 600 - radius; // ��ֹС�򳬳��ұ߽�  
//            if (x <= radius) x = radius; // ��ֹС�򳬳���߽�  
//        }
//
//        cleardevice(); // ����  
//        fillcircle(int(x), int(y), int(radius)); // ��Բ��ע�⽫floatת��Ϊint  
//        Sleep(10); // ��΢������ʱ�Ի�ø�ƽ���Ķ���Ч��  
//    }
//
//    cin.get(); // �ȴ��û�����
//    closegraph(); // �ر�ͼ��ģʽ  
//    return 0;
//}
