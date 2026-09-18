// 实例化我们自己写的类
Wizard wizard01 = new Wizard("鹏华", "火球术");
Wizard wizard02 = new Wizard("寒冰射手", "冰霜新星");


// 调用类的方法
wizard01.CastSpell();
wizard01.CastSpell();
wizard01.CastSpell();

//嗑药 补充蓝量
wizard01.DrinkPotion();
//再次释放技能
wizard01.CastSpell();
wizard02.CastSpell();

//类静态变量调用 查看创建了多少个魔法师
Console.WriteLine("目前总有" + Wizard.wizardCount + "位魔法师");


//保留窗口
Console.ReadLine();




class Wizard
{
    public string? name;
    public string? favoriteSpell;
    public int spellSlots = 2;
    public float experience = 0f;

    //静态函数计数器 全局变量
    //记录创建了多少个魔法师
    public static int wizardCount = 0;

    //构造函数 直接写名字和技能
    public Wizard(string _name, string _favoriteSpell)
    {
        name = _name;
        favoriteSpell = _favoriteSpell;
        wizardCount++;//每次创建一个魔法师，计数器+1
    }



    //释放技能消耗法力槽
    public void CastSpell()
    {
        //法术位减1判断
        if (spellSlots > 0)
        {
            //法球槽减1
            spellSlots -= 1;
            //释放技能
            Console.WriteLine(name + "释放了" + favoriteSpell + ",消耗了1个法术位");
            Console.WriteLine("还剩" + spellSlots + "个法术位");
        }
        else
        {
            Console.WriteLine("法术位不足，无法释放法术,请吃蓝");
        }

        //经验值+1
        experience += 1f;
        Console.WriteLine("经验值+1");
        Console.WriteLine("当前经验值：" + experience);
        Console.WriteLine("-----------------------------");

    }

    //吃蓝药 恢复法力值
    public void DrinkPotion()
    {
        Console.WriteLine("蓝药已嗑，法力值+2");
        Console.WriteLine("当前法力值：" + spellSlots);
        Console.WriteLine("-----------------------------");
        spellSlots += 2;
    }
}

