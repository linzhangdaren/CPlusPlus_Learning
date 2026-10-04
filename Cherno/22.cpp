#include<iostream>
using namespace std;

class abc {
public:
	int x, y;
	//输出xy的值
	void Print() {
		cout << x << "," << y << endl;
	}
};

int main()
{
	//给xy赋值
	abc a = { 1, 2 };
	abc b = { 3, 4 };
	a.Print();
	b.Print();

	return 0;
}