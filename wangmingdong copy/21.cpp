#include <iostream>
using namespace std;

int main() {

    int size;

    size=sizeof(int); 
    cout<<"int类型占用大小是："<<size<<" 字节"<<endl; 
    size=sizeof(short);  
    cout<<"short类型占用大小是："<<size<<" 字节"<<endl; 
    size=sizeof(long);  
    cout<<"long类型占用大小是："<<size<<" 字节"<<endl; 
    size=sizeof(float);  
    cout<<"float类型占用大小是："<<size<<" 字节"<<endl; 
    size=sizeof(bool);  
    cout<<"sizeof() 函数可以用来查看变量或数据类型占用的内存空间大小。"<<endl; 
    cout<<"注意：不同的操作系统和编译器，可能会有不同的结果。"<<endl; 
    cout<<"请查看相关文档以获取更准确的信息。"<<endl; 
    cout<<"谢谢使用！"<<endl; 


    return 0;
}