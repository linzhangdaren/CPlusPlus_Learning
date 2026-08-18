//#include <iostream>
//#include <conio.h>
//#include <graphics.h>
//using namespace std;
////键盘按键代码实时显示
//int main()
//{
//	char ch;
//	////并使用_getch()函数读取下一个键盘输入的字符（不等待回车键）
//	// //一旦有字符被输入，_getch()就会立即返回该字符
//	while (1) {
//		ch=_getch();//实时显示键盘输入和cin不一样
//		cout<<"您输入的字符是:" << ch << endl;
//	}
//
//	////如果_kbhit()返回非零值，表示有键盘输入等待
//	// //那么程序将读取该字符（通过_getch()）并输出
//	//while (1) {
//	//	if (_kbhit()) {
//	//		ch = _getch();
//	//		cout << "您输入的字符是:" << ch << endl;
//	//	}
//	//}
//	_getch();
//closegraph();
//	return 0;
//}