#include <iostream>
#include <string>
#include <vector>
// string 容器
// 因为string是对象所以可以.点出功能



using namespace std;

int main()
{
    string str="鹏华";
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.max_size()<<endl;
    cout<<str.capacity()<<endl;    


    return 0;
}