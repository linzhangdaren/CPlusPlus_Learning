#include <iostream>
using namespace std;

int main()
{
    int num=0;
    int sum=0;
    while(num<=100)
    {
        sum+=num;
        num++;
    }
    cout << sum << endl;
}