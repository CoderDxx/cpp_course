#include <iostream>
using namespace std;
//int fooCount = 0;


//static ���κ�����Ŀ�ģ�Ϊ����̬����

class A
{
public:
    void foo()
    {
        cout<<"void foo()"<<endl;
        fooCount++;
    }
    static int invokefooCount()
    {
        return  fooCount;
    }

private:
    int _m,_n;
    static int fooCount;
};

int A::fooCount = 0;

int main()
{
    {
        A  a,b,c;
        a.foo();
        b.foo();
        c.foo();

        cout<<a.invokefooCount()<<endl;
    }
    cout<<A::invokefooCount()<<endl;



    return 0;
}
