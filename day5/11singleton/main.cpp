#include <iostream>
using namespace std;

//ʵ�ֹ����õ�  ����

//��new ��delete      ����new  ����delete

class Singleton
{
public:
    static Singleton * getInstance()
    {
        if(_ins == nullptr)
            _ins = new Singleton;
        return _ins;
    }
    static void releaseInstace()
    {
        if(_ins != nullptr)
        {
            delete _ins;
            _ins = nullptr;
        }
    }

private:
    Singleton(){}  //��ʱ�����ܹ�������ֶ����ɶ���
     ~Singleton(){}
    Singleton(const Singleton &){}
    Singleton & operator = (const Singleton &){}

    static Singleton * _ins;
};

Singleton * Singleton::_ins = nullptr;

int main()
{
    Singleton * ps = Singleton::getInstance();
    Singleton * ps2 = Singleton::getInstance();
    Singleton * ps3 = Singleton::getInstance();

    Singleton::releaseInstace();

    return 0;
}
