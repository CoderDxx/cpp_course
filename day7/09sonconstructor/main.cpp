#include <iostream>
using namespace std;

//����  1 �����޲Σ�2 ����  3 Ĭ��

//����Ĺ���Ĺ�����   ���࣬ ��Ƕ�Ӷ���   ����

//���ø���Ĺ�����, ����ᱻ���á� û�б��䣬������ʾ�ĵ���
//����  �����б��䣬   ����

//������Ƕ�Ӷ���ĵĹ�����, ����ᱻ���á� û�б��䣬������ʾ�ĵ���
//����  �����б��䣬   ����


class C
{
public:
    C(int k)
    {
        cout<<"C()"<<endl;
        c = k;
    }

    int c;
};


class A
{
public:
    A(int i)
    {
        cout<<"A()"<<endl;
        a = i;
    }

    int a;
};

class B:public A
{
public:
    B(int i, int j,int k)
        :A(i),c(k)
    {
        cout<<"B()"<<endl;
       b = 10;
    }

    int b;
    C c;
};

int main()
{
    B b(3,5,10);
    cout<<b.a<<endl;
    cout<<b.b<<endl;
    cout<<b.c.c<<endl;

    return 0;
}
