#include <iostream>
using namespace std;
// singleton pattern 单例模式

class GameMode
{
private:
    GameMode();

public:
    int Age = 10;
    static GameMode *Get()
    {
        static GameMode *instance = new GameMode();
        return instance;
    }

    void Say()
    {
        cout << "Say()" << endl;
    }
};

int main()
{
    GameMode::Get()->Say();
 

    class GameMode a;

    return 0;
}
