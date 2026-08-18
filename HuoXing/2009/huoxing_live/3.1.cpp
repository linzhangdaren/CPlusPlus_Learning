#include <iostream>

using namespace std;


int main() {
    // 外层循环
    for (int i = 1; i <= 5; ++i) {
        // 内层循环
        for (int j = 1; j <= 5; ++j) {
            cout << "i = " << i << ", j = " << j << endl;
            // 如果 i = 3 且 j = 3，则跳出内层循环
            if (i == 3 && j == 3) {
                break; 
            }
        }
        // 如果 i = 3，则跳出外层循环
        if (i == 3) {
            break; // 
        }
    }
    return 0;
}
