#include <iostream>
using namespace std;

int main()

{
    cout << "九九乘法表" << endl;
    for (int i = 1; i <= 9; i++){ // 外层循环控制行数，从1到9
        for (int j = 1; j <= i; j++){ // 内层循环控制每行的元素个数，从1到i
            cout << j << "x" << i << "=" << i*j << "\t"; // 输出乘法表的元素，使用制表符\t进行对齐
        }
        cout << endl; // 每输出一行后换行
    }
    cout << endl; // 输出完乘法表后换行
    
        return 0;
}