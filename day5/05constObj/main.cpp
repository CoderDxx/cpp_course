#include <iostream>
using namespace std;


//const data member
//const func member
//const obj

//const ���εĶ������ڿ����з�const ���ݳ�Ա,�������޸ġ�ֻ�ܵ���const ��Ա����
//���const�п������ζ��������ṩ�����汾����������

class A
{
public:
    A(int x, int y):_x(x),_y(y){}
    void dis()
    {
        cout<<_x<<_y<<endl;
    }
    void dis() const
    {
        cout<<_x<<_y<<endl;
    }

private:
    int _x;
    const int _y;
};

void func(const A & a)
{
    a.dis();
}

int main()
{
    const A a(3,4);
    a.dis();
    func(a);
    return 0;
}
