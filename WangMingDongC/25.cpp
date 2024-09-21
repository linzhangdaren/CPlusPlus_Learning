#include <iostream>
using namespace std;

int main(){

    int a = 1;
    int b = 1;
    int result = a == b &&(a = a + b);

    cout << a << endl;
    cout << b << endl;
    return 0;
}