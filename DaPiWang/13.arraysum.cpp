//数组的应用 求和 平均数 最小值 最大值等

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // 设置控制台输出代码页为UTF-8 (65001)
    SetConsoleOutputCP(65001);
    // 设置控制台输入代码页为UTF-8 (65001)
    SetConsoleCP(65001);

  
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    //数组的个数/长度
    int len_array=0;//定义数组长度
    len_array=sizeof(arr)/sizeof(arr[0]);//求出数组的长度

    //求和
    int sum_array=0;
    for(int i=0;i<len_array;i++)
    {
        sum_array+=arr[i];//sumarray=sumarray+arr[i];
    }
    cout<<"数组的和为:"<<sum_array<<endl;

    //平均数

    int avg_array=0;//定义平均数
    avg_array=sum_array/len_array;//平均数=和/长度
    cout<<"数组的平均数为:"<<avg_array<<endl;

    //最大值 最小值同理
    int max_array=arr[0];//定义最大值为数组的第一个元素
    for(int i=0;i<len_array;i++)
{
    if(arr[i]>max_array)
    {
        max_array=arr[i];//如果数组元素大于最大值就把最大值赋值为数组元素
    }
}
    cout<<"数组的最大值为:"<<max_array<<endl;


    return 0;
}