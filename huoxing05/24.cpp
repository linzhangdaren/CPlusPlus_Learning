#include <iostream>
using namespace std;

int main()
{
string name="你好，世界！";
string name1={"你好，世界！"};//这种写法是错误的
string name2{"你好，世界！"};

cout<<name<<endl;
cout<<name1<<endl;
cout<<name2<<endl;

return 0;
}