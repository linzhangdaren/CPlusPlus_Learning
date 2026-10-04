#include<iostream>
#include<string>
using namespace std;

class Entity
{
public:
	virtual string GetName() { return "Entity"; }//virtual子类重写父类
	//父类Entity类直接可以调用任何子类对象的方法了
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

	string GetName() override//override可以不添加 但是为了可读性 
		//他可以可以报错是否写错父类的方法 如果父类没有此方法他会报错的
	{
		return m_Name;
	}
};

void PrintName(Entity* entity)
{
	cout << entity->GetName() << endl;
}

int main()
{
	Entity* e = new Entity();
	//cout << e->GetName() << endl;

	Player* p = new Player("Cherno");
	PrintName(p);
	//cout << p->GetName() << endl;

	return 0;
}