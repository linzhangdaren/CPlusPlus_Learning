#include <iostream>
using namespace std;

int main()
{

    int *parr1 = new int[5]{1, 2, 3, 4, 5};
    int *parr2 = new int[7];

    // 插入是循环新数组然后进行填充
    // 非插入位置填充老数组元素则而反之
    int offset = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i == 1)
        {
            parr2[i] = 100;
            offset++;
            continue;
        }
        else if (i == 4)
        {
            parr2[i] = 200;
            offset++;
            continue;
        }
        parr2[i] = parr1[i - offset];
    }
    cout << "parr2: ";
    for (int i = 0; i < 7; i++)
    {
        cout << parr2[i] << " ";
    }

    delete[] parr1;
    return 0;
}