#include <iostream>
using namespace std;

//virtual �����͹ؼ��֣���������һ���������飬���าд�˵ĺ�����Ҳ��virtual
//��д ͬ����ͬ�Σ�ͬ����  override
//�麯�������еģ��������Բ���Ӱ���̬����������Ҫ�����ࡣ


class A
{
public:
    virtual void foo()= 0;
};
class B:public A
{
};
class C:public B
{
public:
    virtual void foo()
    {
        cout<<"C::foo"<<endl;
    }
};

int main()
{
    A a;
    B b;
    return 0;
}
