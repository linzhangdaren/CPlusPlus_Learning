//goto 标记;
//标记:

#include<iostream>
using namespace std;

int main()
{
	cout << "1" << endl;
	cout << "2" << endl;
	goto fls5;
	cout << "3" << endl;
	cout << "4" << endl;
	fls5:
	cout << "5" << endl;

	system("pause");
	return 0;
}

