#include <iostream>
#include <typeinfo>
using namespace std;

class A
{
public:
    virtual ~A(){} // ���޴��麯���� �������ʱ��Ϣ������
};
class B:public A{
};
class C:public A{
};


int main()
{
    B b;
    C c;
    A &r1 =  b;
    A &r2 =  c;
    A &r3 =  b;

    if(typeid(r1) == typeid(r2))
    {
        cout<<typeid(r1).name()<<endl;
        cout<<typeid(r2).name()<<endl;
        cout<<"p1������ͬp2������"<<endl;
    }

    if(typeid(r1) == typeid(r3))
    {
        cout<<typeid(r1).name()<<endl;
        cout<<typeid(r3).name()<<endl;
        cout<<"p1������ͬp3������"<<endl;
    }
}

#if 0
int main()
{
    B b;
    C c;
//    A *p1 =  &b;
//    A *p2 =  &c;
//    A *p3 =  &b;


    cout<<typeid(p1).name()<<endl;
    cout<<typeid(p2).name()<<endl;

    if(typeid(*p1) == typeid(*p2))
    {
        cout<<typeid(p1).name()<<endl;
        cout<<typeid(p2).name()<<endl;
        cout<<"p1������ͬp2������"<<endl;
    }

    if(typeid(*p1) == typeid(*p3))
    {
        cout<<typeid(*p1).name()<<endl;
        cout<<typeid(*p3).name()<<endl;
        cout<<"p1������ͬp3������"<<endl;
    }

    return 0;
}
#endif

#if 0
int main()
{
    //��������
    char ch;
    cout<<typeid(ch).name()<<endl;
    cout<<typeid(short).name()<<endl;
    cout<<typeid(int).name()<<endl;
    cout<<typeid(long long).name()<<endl;
    cout<<typeid(float).name()<<endl;
    cout<<typeid(double).name()<<endl;

    //��������
    void (*pf)(int);
    cout<<typeid(pf).name()<<endl;
    //ָ������
    cout<<typeid(int*).name()<<endl;
    cout<<typeid(const int*).name()<<endl;
    cout<<typeid(int* const).name()<<endl;
    return 0;

}
#endif
