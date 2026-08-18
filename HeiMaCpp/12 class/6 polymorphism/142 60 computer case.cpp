#include <iostream>
using namespace std;
// computer case 电脑案例
// 三个零件类 cpu 显卡 内存
// 品牌方类 intel 英特尔

// 三个零件类:cpu 显卡 内存

// cpu抽象类
class CPU
{
public:
    // 抽象cpu类
    virtual void calculate() = 0;
};
// 显卡抽象类
class GPU
{
public:
    // 抽象显卡类
    virtual void display() = 0;
};
// 内存抽象类
class Memory
{
public:
    // 抽象内存类
    virtual void storage() = 0;
};

// 电脑组装类
class Computer
{
public:
    // 构造函数
    Computer(CPU *cpu, GPU *gpu, Memory *memory)
    {
        m_cpu = cpu;
        m_gpu = gpu;
        m_memory = memory;
    }
    // 成员函数
    // 提供工作的函数
    void work()
    {
        // 让零件工作起来,调用零件的接口函数
        m_cpu->calculate();
        m_gpu->display();
        m_memory->storage();
    }
    // 析构函数
    // 释放 cpu gpu memory
    ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_gpu != NULL)
        {
            delete m_gpu;
            m_gpu = NULL;
        }
        if (m_memory != NULL)
        {
            delete m_memory;
            m_memory = NULL;
        }
    }

private:
    // 私有成员变量
    CPU *m_cpu;       // cpu指针
    GPU *m_gpu;       // 显卡指针
    Memory *m_memory; // 内存指针
};

// 具体厂商
// intel 英特尔厂商
class Intel : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel的cpu开始计算了" << endl;
    }
};
class IntelGPU : public GPU
{
public:
    virtual void display()
    {
        cout << "Intel的显卡开始显示了" << endl;
    }
};
class IntelMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "Intel的内存开始存储了" << endl;
    }
};

// Lenovo 厂商
class Lenovo : public CPU
{
public:
    virtual void calculate()
    {
        cout << "Lenovo的cpu开始计算了" << endl;
    }
};
class LenovoGPU : public GPU
{
public:
    virtual void display()
    {
        cout << "Lenovo的显卡开始显示了" << endl;
    }
};
class LenovoMemory : public Memory
{
public:
    virtual void storage()
    {
        cout << "Lenovo的内存开始存储了" << endl;
    }
};

void test01()
{
    // 第一台电脑零件
    cout << "第一台电脑组装" << endl;
    CPU *cpu1 = new Intel();
    GPU *gpu1 = new IntelGPU();
    Memory *memory1 = new IntelMemory();
    // 组装第一台电脑
    Computer *computer1 = new Computer(cpu1, gpu1, memory1);
    computer1->work();
    cout << "---------------------" << endl;
    delete computer1;
}

void test02()
{
    // 第二胎电脑组装
    cout << "第二台电脑组装" << endl;
    Computer *computer2 = new Computer(new Lenovo(), new LenovoGPU(), new LenovoMemory());
    computer2->work();
    cout << "---------------------" << endl;
    delete computer2;
}

// 主函数
int main()
{
    test01();
    test02();
    return 0;
}