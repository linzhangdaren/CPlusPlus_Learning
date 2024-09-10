#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// 读文件
// 1. 包含头文件: #include <fstream>
// 2. 创建流对象: ifstream ifs;
// 3. 打开文件并判断是否打开成功: ifs.open("路径",打开方式);
// 4. 读数据:四种方式
// 5. 关闭文件: ifs.close();

// 文件读取的四种方式:

// 1. >> 操作符 (不会换行 换行错乱)
// char buf[1024] = {0};
// while (ifs >> buf)
// {
//     // 把文件中的数据读取到buf中读到头会返回false
//     cout << buf << endl;
// }

// 2. getline函数(可自定义一次读取多少字节 换行还行)
//  char buf[1024] = {0};
//   while (ifs.getline(buf, sizeof(buf)))
//   {
//       cout << buf << endl;
//   }

// 3.string getline(读取多少字节)
// string buf; // 定义一个字符串
// while (getline(ifs, buf))
// {
//     cout << buf << endl;
// }

// 4.EOF(读取到文件末尾)
//  char c;
// while ((c = ifs.get()) != EOF) // 没有读到文件末尾就一直读取
//  {
//      cout << c;
//  }

void test01()
{
    // 1. 包含头文件: #include <fstream>

    // 2. 创建流对象: ifstream ifs;
    ifstream ifs; // 或者fstream ifs读写

    // 3. 打开文件并判断是否打开成功: ifs.open("路径",打开方式);
    ifs.open("I Love You.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return; // 如果失败不再读取数据
    }
    else
        cout << "文件打开成功" << endl;

    // 4. 读数据:四种方式
    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }

    // 5. 关闭文件: ifs.close();
    ifs.close();
}

int main()
{
    test01();
    return 0;
}