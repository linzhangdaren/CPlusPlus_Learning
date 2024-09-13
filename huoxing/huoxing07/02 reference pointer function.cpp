#include <iostream>
using namespace std;
// 通过指针引用传递参数 改变指针指向的值

void Say(int *&Num)
{
    Num = new int(200);
};

int main()
{
    int *pNum = new int(100);
    Say(pNum);
    cout << *pNum << endl;

    return 0;
}

// void Say(int **Num)
// {
//     *Num = new int(200);
// };

// int main()
// {
//     int *pNum = new int(100);
//     Say(&pNum);

//     return 0;
// }