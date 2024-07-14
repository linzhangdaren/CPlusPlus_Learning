// 1.洗一个碗
// 2.拖地1次 拖地2次 拖地3次

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        cout << "洗碗" << i << "次" << endl;
        for (int j = 1; j <= 3; j++)
        {
            cout << "拖地" << j << "次" << endl;
        }
    }

    return 0;
}