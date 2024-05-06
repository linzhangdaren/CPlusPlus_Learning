#include <iostream>

using namespace std;

int main() {
    for (int i = 1, count = 0; i <= 100; ++i) {
        // 检查数字是否包含7（个位或十位）或者是否能被7整除
        if ((i % 10 == 7 || i / 10 == 7) || (i % 7 == 0)) {
            continue; // 如果是，则跳过不打印
        }

        cout << i << " "; // 如果不是，则打印数字
        count++; // 增加计数器

        // 当计数器达到10时，打印换行符并重置计数器
        if (i % 10 == 0) { // 每行打印10个数字后换行
            cout << endl; // 换行
           
        }


    }

     return 0;
}