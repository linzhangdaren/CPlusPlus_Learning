#include <iostream>
using namespace std;
// 编译阶段的提示debug

#define DEBUG 1

#if DEBUG == 0
#error OK
#endif

int main()
{

    return 0;
}