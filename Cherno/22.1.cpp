#include<iostream>
using namespace std;

class abc {
public:
	// static int x,y; 只是纸上写：我们会有一块公共黑板叫x、y
	// 仅仅是登记备案！！黑板实物还没有造出来，没有内存
	static int x, y;

	// static静态函数：属于整个类，不属于任何对象
	// 没有this指针！看不见对象自己身上的东西，只能看公共黑板(static变量)
	static void Print() {
		// 这里打印的不是某个对象身上的x y，就是墙上那块公共黑板的数字
		cout << x << "," << y << endl;
	}
};

// ！！！这两行才是真正把【公共黑板】造出来，给x y分配实实在在内存
// 不写这两行，程序链接直接报错，黑板只存在图纸上，现实找不到
int abc::x;
int abc::y;



int main()
{
	// 直接操作墙上公共黑板，给黑板写数字
	abc::x = 1;
	abc::y = 2;


	// 直接用类名调用静态Print函数，不需要创建任何对象（不用造小人）
	abc::Print();

	// 也可以造个空对象来调用Print，语法允许，但不推荐
	// abc a;
	// a.Print(); // 表面看是a在打印，实际还是读取墙上那块黑板，a本身身上啥变量都没有

	return 0;
}
