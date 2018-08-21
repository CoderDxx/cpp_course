#include <iostream>
using namespace std;

//const ���κ����Ժ󣬳�ŵ�����ı䣬�ڱ��������ᷢ�����ı����ݳ�Ա����Ϊ��
//ֻ�ܵ���const��Ա����

//const���ɵ����غ�������const �������ȵ��÷�const�汾
//const ����, ֻ�ܵ���const�汾���ܶ�ⳣ���ṩ�����汾

//inline   const  static  ���� �� ����


class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void foo();
    void foo() const ;
    static void func();

    inline  void xxx();

private:
    int _x;
    int _y;
};

void A::foo()
{
    cout<<"void foo()"<<endl;
    cout<<_x<<_y<<endl;
}

void A::xxx()
{

}

void A::func()
{

}

void A::foo()const
{
    cout<<"void foo() const"<<endl;
    cout<<_x<<_y<<endl;
}

int main()
{
    const A a(3,4);
    a.foo();
}

#if 0
class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void foo() const
    {
        cout<<_x<<_y<<endl;
        func();
    }

    void func() const
    {
        cout<<_x<<_y<<endl;
    }

private:
    int _x;
    int _y;
};

int main()
{
    A a(3,4);
    a.foo();
}

#endif

#if 0

//const ���Σ��ຯ����Ա������������ȫ�ֺ�����
//const ���ɵ���������

int add(int &a, int& b)
{
    return a+b;
}

int add(const int &a, const int& b)
{
    return a+b;
}

class A
{
public:
    void foo()
    {
    }
    void foo() const
    {
    }
};



int main()
{
    int a = 3; int b  = 5;
    cout<<add(a,b)<<endl;

    cout<<add(3,6)<<endl;

    return 0;
}

#endif
