#include<iostream>
#include<string>
using namespace std;

class Entity
{
public:
	string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
	string m_Name;
public:
	Player(const string& name)
	{
		m_Name = name;
	}
	string GetName() { return m_Name; }
};

void PrintName(Entity* entity)
{
	cout << entity->GetName() << endl;
}

int main()
{
	Entity* e = new Entity();
	cout << e->GetName() << endl;

	Player* p = new Player("Cherno");
	cout << p->GetName() << endl;
	PrintName(p);//输出的还是Entity
	//在cout中调用的GetName()都是重复的代码
	//所以需要一个函数来解决这个问题
	//但是会发现如果用void创建一个函数会无法做到 因为
	// 对象就是某个类 (class) 的实例，它的类型就是这个类名
	// 所以需要类class 的Entity或(Player)类型来接收或引用对象，才能调用类的成员函数
	//void PrintName(Entity* entity)或者void PrintName(Player* entity)
	// 无法做到把Entity和Player都放在一个函数中，因为他们是不同的类，虽然Player继承了Entity，但是他们的类型不同
	// 所以需要使用虚函数来解决这个问题 只用一个父类Entity就可以调用所有的子类对象了

	return 0;
}