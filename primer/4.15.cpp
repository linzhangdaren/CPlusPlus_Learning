#include <iostream>  //包含iostream头文件
using namespace std; // 使用标准命名空间
int main()           // 定义主函数
{
    int updates = 6;                                 // 定义整型变量updates并赋值为6
    cout << "updates的地址是：" << &updates << endl; // 输出updates的地址

    int *p_updates = &updates;                                 // 定义指向整型变量的指针p_updates并赋值为updates的地址
    cout << "p_updates的地址是：" << p_updates << endl;        // 输出p_updates的地址值
    cout << "p_updates的数值是：" << *p_updates << endl;       // 输出p_updates所指向的值
    *p_updates = *p_updates + 1;                               // 将p_updates所指向的值加1，即updates的值加1
    cout << "*p_updates加1后的的值是：" << *p_updates << endl; // 输出updates的值，即加1后的值
    cout << "*p_updates加1后的的地址是：" << p_updates << endl;
    cout << "updates指针地址加1后的值是：" << updates << endl; // 输出p_updates的地址值，即加1后的地址值
}
// B站课程https://www.bilibili.com/video/BV1sK41127iZ?p=17&spm_id_from=pageDriver&vd_source=cc0c4e841ffdf37a1a647cbdf65c233f
