// string 单个字符的访问
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 访问单个string的字符
    {
        string a = "0123456789";
        a[0] = 'A';
        cout << a << endl; // "A123456789"
    }

    // 输入转换小案例 转换16进制的 这种思路也能用于加密
    // 输入一个字符,对应出来特定的某个字符!
    // {
    //     int i;
    //     cin >> i;
    //     string num = "0123456789ABCDEF";
    //     cout << num[i] << endl; // 输出对应的16进制字符
    // }

    // 字符串的比较
    {
        string a = "hello";
        string b = "world";
        int c = a == b ? 0 : 1; // 0
        cout << c << endl;      // 1
    }

    // 字符串的比较2 compare()函数
    // 返回不是布尔是int类型 -1 小于 0 等于 1 大于
    {
        string a = "hello";
        string b = "world";
        int c = a.compare(b); // 0
        cout << c << endl;    // 0
        // 高级截断比较compare(起始位置,参与比较的长度,被比较的字符串)
        c = a.compare(0, 3, b); // 0
    }

    // find()函数搜索配合substr()函数截取输出
    {
        string id = "myID:123456";
        int mark = id.find(":"); // 4 找到:的位置
        // int mark = id.find(":",1,3);// 4 找到:的位置,从1开始,最多3个字符
        cout << id.substr(mark + 1) << endl; // +1往后偏移一位 输出123456
    }

    // 字符串的插入 insert()函数
    {
        string a = "hello";
        a.insert(5, "world"); // 插入world到位置2
        cout << a << endl; // "heworldlo"
    }
    

    return 0;
}