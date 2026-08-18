// string的长度
#include <iostream>
#include <string>
using namespace std;

int main()
{
  // 包含空格的长度
  string a="hello world";
  cout<<a.size()<<endl;
 
  //截断 .substr()
  cout<<a.substr(0,3)<<endl;
  //从索引0开始截取3个字符

  //判断字符串是否为空 .empty()
  if(a.empty())
  {
    cout<<"字符串为空"<<endl;
  }
  else
  {
    cout<<"字符串不为空"<<endl;
  }

  //与字符串做判断
  if(a=="hello world")
  {
    cout<<"字符串相等"<<endl;
  }
  else
  {
    cout<<"字符串不相等"<<endl;
  }



    return 0;
}