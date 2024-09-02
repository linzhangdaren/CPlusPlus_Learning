#include <iostream>
using namespace std;
// 指针 数组
// 数组首地址即为数组名
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "第一个元素为:" << arr[0] << endl;
    int *p = arr;
    cout << "第一个元素为:" << *p << endl;

    for (int i = 0; i < 10; i++)
    {
        // 数组的遍历
        //  cout << arr[i] << endl;
        // 指针的遍历
        // cout << *(p + i) << endl;//第一种写法
        // cout << p[i] << endl; // 第二种写法
        // 第三种写法:
        // cout<<*p<<endl;
        // p++;
    }

    system("pause");
    return 0;
}