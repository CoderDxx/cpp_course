#include <iostream>

using namespace std;

//const ���Σ������ݳ�Ա������Ҫ��ʼ��
//const ��ʼ����һ������ڣ�����. ��һ���ڣ���ʼ���б� initial list
//initial list һ���棬Ч�ʵ�����. Ϊ��һЩ����չ�Ĺ��ܣ��ṩ������������ǰ취
//const ���ε����ݳ�Ա�������ڷ�const������ʹ�ã����ǲ����Ը��ġ�

class A
{
public:
    A(int i):_i(i)
    {}
    void dis()
    {
        cout<<_i<<endl;
        _i = 200;
    }

private:
    const int _i;
};

int main()
{
    A a(100);
    a.dis();
    return 0;
}



#if 0

class A
{
public:
    A(int &zz):x(100),y(200),z(zz)
    {
        cout<<"const x = "<<x<<endl;
        this->y = 200;
        cout<<z<<endl;
    }

    void dis()
    {
        cout<<z<<endl;
    }

private:
    const int x; //const int x = 100;
    int y;
    int &z;
};

int main()
{
    int  z = 100;
    A a(z);
    a.dis();

    return 0;
}

#endif
