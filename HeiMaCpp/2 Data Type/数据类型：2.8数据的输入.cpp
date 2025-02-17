//输入数据 对话框输入数据
//案例：cin>>变量；
//说明：cout为输出 c out
//       cin为输入 c in
//注意事项：

#include<iostream>
#include<string>
using namespace std;

int main()
{
	//1 整数
	int a = 0;
	cout << "请输入整数类型数字,输入完后请按回车键" << endl;
	cin >> a;
	cout << "您输入的值为：" << a << endl;

	//2 浮点
	double b = 0;
	cout << "您可以输入小数类字符，输入完后请按回车" << endl;
	cin >> b;
	cout << "您输入的值为：" << b << endl;

	//3 字符
	char c = 'a';
	cout << "您可以输入单个字符，输入完后请按回车" << endl;
	cin >> c;
	cout << "您输入的字符为：" << c << endl;

	//4 字符串
	string d = "汉字";
	cout << "请您输入字符串，输入完后请按回车" << endl;
	cin >> d;
	cout << "您输入的字符串为：" << d << endl;


	//5 布尔:可以直接赋值false
	bool e = true;
	cout << "请输入值，来判断真假，输入完后请按回车" << endl;;
	cin >> e;
	cout << "您输入的值为：" << e << endl;



	system("pause");
	return 0;
}