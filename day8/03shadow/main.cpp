#include <iostream>
using namespace std;

//void dump;
//void dis();
//void disBirth;
//void disdump;

//operator=
//Student::operator=


//shadow   override ��д    overload

//shadow �ڸ������У�������������ʶ��(������Ա�����ݳ�Ա)���ͻṹ�ɣ�shadow��
//�������ʱ�shadow�ĳ�Ա�����ϸ���������ռ�
//shadow  �ڸ������� ����

class A
{
public:
    void foo(int i=0)
    {
        cout<<"A::void foo()"<<endl;
    }

    A &operator=(const A &)
    {
         cout<<"A &operator=(const A &)"<<endl;
    }
};

class B:public A
{
public:
    void foo()
    {
        cout<<"B::void func()"<<endl;
        foo();
    }

    B &operator=(const B &an)
    {
         cout<<"B &operator=(const B &)"<<endl;
         A::operator =(an);
    }

};


int main()
{
    B b;
    b.foo();
    return 0;
}
