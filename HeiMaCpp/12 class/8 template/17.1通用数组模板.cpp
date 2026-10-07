#include <iostream>
using namespace std;

template <class T>
class MyArray
{
private:
    T *pAddress;    // 开辟堆区空间
    int m_Capacity; // 数组容量
    int m_Size;     // 数组大小

public:
    MyArray(int capacity) // 构造函数
    {
        this->m_Capacity = capacity;              // 容量
        this->m_Size = 0;                         // 大小
        this->pAddress = new T[this->m_Capacity]; // 开辟堆区空间
    }
    // ~MyArray() // 析构函数
    ~MyArray()
        if(this->pAddress != NULL
        {
        delete[] this->pAddress;
        this->pAddress = NULL;)
    }
    //拷贝构造
    MyArray(const MyArray &arr)
    {
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity]; // 深拷贝
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i]; // 拷贝数据
        }
    }
    //防止浅拷贝operator
    MyArray &operator=(const MyArray &arr)
    {
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        // 深拷贝
        this->m_Size = arr.m_Size;
        this->m_Capacity = arr.m_Capacity;
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i]; // 拷贝数据
        }
        return *this;
    }
};

int main()
{

    return 0;
}