#include <iostream>
using namespace std;

int main()
{

    int num[] = {1, 2, 3, 4, 5};
    int *p = &num[0];
    cout << *p << endl;
    cout << *(p + 1) << endl;

    return 0;
}
