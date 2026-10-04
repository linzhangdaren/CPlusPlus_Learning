#include<iostream>
using namespace std;
int main() {

	float a = 1.1f;
	bool b = true;
	cout << "布尔类型占用字节大小：" << sizeof(b) << endl;

	//或着直接写入类型名也能输出
	cout << "char类型占用字节大小：" << sizeof(char) << endl;
	cout << "int类型占用字节大小：" << sizeof(int) << endl;
	cout << "float类型占用字节大小：" << sizeof(float) << endl;
	cout << "double类型占用字节大小：" << sizeof(double) << endl;
	cout << "long类型占用字节大小：" << sizeof(long) << endl;
	cout << "long long类型占用字节大小：" << sizeof(long long) << endl;
	cout << "short类型占用字节大小：" << sizeof(short) << endl;
	cout << "long double类型占用字节大小：" << sizeof(long double) << endl;

	cin.get();

	return 0;
}