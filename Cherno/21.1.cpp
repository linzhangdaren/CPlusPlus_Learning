#include<iostream>
using namespace std;
extern int a;//extern 去外面的文件找这个变量a;
//extern int b;//这里找不到的 b，因为21.cpp里的b是static的,只限在21.cpp里用

int main()
{
	cout << "Hello World!" << endl;
	cout << a << endl;

	cin.get();
	return 0;
}