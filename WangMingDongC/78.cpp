#include <iostream>
using namespace std;

int main()
{

    int arr[2][3] = {1, 2, 3, 4, 5, 6};

    cout << "数组空间大小表示方法:" << endl;
    cout << endl;
    cout << "数组总空间大小为:"<<"sizeof(arr)" <<endl;   // 输出数组总空间大小，包括所有元素和所有维度的长度信息。
    cout << "一个元素大小为:"<<"sizeof(arr[0][0])" << endl; // 输出一个元素的大小，即最内层元素的大小。
    cout << "一行元素大小为:"<<"sizeof(arr[0])" << endl;    // 输出一行元素的大小，即第二层元素的大小。
    cout<<"______________________________________________"<<endl<<endl;

    cout << "数组元素 行 列个数表示方法:" << endl;
    cout << endl;
    cout << "元素个数为:" <<" sizeof(arr) / sizeof(arr[0][0]) "<< endl; // 输出数组元素个数，即所有元素的总和。
    cout << "行个数为:" << "sizeof(arr) / sizeof(arr[0])" << endl; // 输出行个数，即第一层元素的总和。
    cout << "列个数为:" << "sizeof(arr[0]) / sizeof(arr[0][0])" << endl; // 输出列个数，即第二层元素的总和。
    cout<<"______________________________________________"<<endl<<endl;

    cout << "数组元素 行 列个数:" << endl;
    cout << endl;
    cout << "元素个数为:" << sizeof(arr) / sizeof(arr[0][0]) << endl; // 输出数组元素个数，即所有元素的总和。
    cout << "行个数为:" << sizeof(arr) / sizeof(arr[0]) << endl; // 输出行个数，即第一层元素的总和。
    cout << "列个数为:" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl; // 输出列个数，即第二层元素的总和。
    cout<<"______________________________________________"<<endl<<endl;

    return 0;
}