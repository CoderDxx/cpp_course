#include <iostream>
using namespace std;



//1�������������  2���ʷ���

//����ת�Ľǵ�����

//1 ��ȡ�������У���ͬ�ĳ�Ա�������游��
//2 �ø����࣬�̳��游��
//3 ��̳���һ�ּ̳е���չ, virtual �̳��游��
//4 ��̳�Ҳ��һ����ƵĽ����


class A
{
protected:
    int _data;
};


class X: virtual public A
{
public:
    X(int d){
        cout<<"X()"<<endl;
        _data = d;
    }
    void setData( int d)
    {
        _data = d;
    }


};

class Y:virtual public A
{
public:
    Y(int d){
        cout<<"Y()"<<endl;
        _data = d;
    }
    int getData()
    {
        return _data;
    }
};

class Z:public X,public Y
{
public:
    Z(int i,int j)
        :X(i),Y(j)
    {

    }

    void dis()
    {
//        cout<<X::_data<<endl;
//        cout<<Y::_data<<endl;  //ambiguous
        cout<<_data<<endl;
    }

};

int main()
{
    Z  z(100,200);
    z.dis();
    cout<<"+++++++++++++++"<<endl;
    z.setData(100000);
    cout<<z.getData()<<endl;
    cout<<"+++++++++++++++"<<endl;
    z.dis();
    return 0;
}
