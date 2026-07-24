//函数 数组 调用

#include <iostream>
using namespace std;



int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};

    int sum_array=0;
    for(int i=0;i<10;i++)
    {
        sum_array+=array[i];
    }
    cout<<"数组的和为:"<<sum_array<<endl;


    return 0;
}