#include <iostream>

using namespace std;

class Base {
public:
    virtual void f() { cout << "Base::f" << endl; }
    virtual void g() { cout << "Base::g" << endl; }
    virtual void h() { cout << "Base::h" << endl; }
};

class Derive:public Base
{
    virtual void f() { cout << "Derive::f1" << endl; }
    virtual void g1() { cout << "Derive::g1" << endl; }
    virtual void h1() { cout << "Derive::h1" << endl; }
};

typedef void (*FUNC)();

int main()
{
    cout<<"Base size:"<<sizeof(Base)<<endl;

    Derive b;
    cout<<"�������ʼ��ַ��"<<&b<<endl;
    cout<<"�麯����ĵ�ַ��"<<(int**)*(int *)&b<<endl;
    cout<<"�麯�����һ�������ĵ�ַ��"<<*((int**)*(int *)&b)<<endl;
    cout<<"�麯����ڶ��������ĵ�ַ��"<<*((int**)*(int *)&b+1)<<endl;

    FUNC pf = (FUNC)(*((char**)*(int *)&b));
    pf();
    pf = (FUNC)(*((char**)*(int *)&b+1));
    pf();
    pf = (FUNC)(*((char**)*(int *)&b+2));
    pf();
    pf = (FUNC)(*((char**)*(int *)&b+3));
    pf();
    pf = (FUNC)(*((char**)*(int *)&b+4));
    pf();
//    pf = (FUNC)(*((char**)*(int *)&b+5));
//    pf();
//    pf = (FUNC)(*((int**)*(int *)&b+3));
//    pf();

    return 0;
}
