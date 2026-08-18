// vector 容器的使用 比新式数组更加灵活 包括array所有的功能，
// 但比array更加安全，因为vector容器可以自动管理内存，避免了内存泄漏。
// vector容器的优点：
// 1.动态调整大小
// 2.存放不同类型的数据
// 3.方便的进行元素的添加、删除、修改等操作。
// 总体来讲和python的列表、数组类似，但比python的列表更加灵活。

#include <iostream>
#include <vector> // 引入vector容器头文件
using namespace std;

// 打印函数
void printF(vector<int> students)
{
    for (int i : students)
        cout << i << " "; //{}
    cout << endl;
}

int main()
{
    // 定义一个vector容器
    vector<int> students = {1, 2, 3};
    // 指定元素个数的写法用小括号()
    vector<int> students1(3);
    // 指定+赋值的写法 3个元素，每个元素赋值为100
    vector<int> students2(3, 100);

    // vector功能
    // 1.测试大小 size()
    cout << ".size()数组students大小为:" << students.size() << endl;

    // 2.数组后面添加一个值为20的元素 push_back()
    students.push_back(20);
    cout << ".push_back()数组students后面添加一个值为20的元素后:" << endl;
    printF(students);

    // 3.重新初始化数组元素 assign()
    students.assign(3, 50);
    cout << ".assign()重新初始化数组后:" << endl;
    printF(students);

    // 4.清空数组元素 clear()不要和empty()混淆后者是判断是否为空bool类型
    students.clear();
    cout << ".clear()清空数组后:" << endl;
    printF(students);
    if (students.empty())
    {
        cout << "数组为空" << endl;
    }

    return 0;
}