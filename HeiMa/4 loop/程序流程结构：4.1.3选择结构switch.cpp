//switch (整数或字符型)  打分案例 switch目录树干清晰，效率高
// //{
////	case 结果1：执行语句; break;
//		case 结果2：执行语句; braak;
//			....
//		default:执行语句; break;
//}

#include<iostream>
using namespace std;

int main()
{
	int f = 0;

	cout << "请给电影打分" << endl;
	cin >> f;
	cout << "您打的分为" << f << endl;

	switch (f)
	{
	case 10:
		cout << "您认为是经典电影" << endl; break;
	case 9:
		cout << "您为电影一般" << endl; break;
	default:
		cout << "您人为是烂片" << endl; break;

	}

	system("pause");
	return 0;
}