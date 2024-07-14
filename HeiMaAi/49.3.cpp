#include <iostream>
using namespace std;

int main()
{
    int num;
    num = 1;
    while(num){
        cout << num << endl;
        num++;
        if(num>100){
            num = 0;
        }
    }
    return 0;
}