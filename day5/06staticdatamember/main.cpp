#include <iostream>
#include "b.h"
using namespace std;


//static ����Э��


//static �������ݳ�Ա����Ҫ��ʼ�������������ڳ�ʼ��
//�����ʼ������Ҫ�����ռ䣬�ң�����static

//���������ʵ�ַֿ���ʱ�򣬳�ʼ������.h .cpp�У� .cpp��
//��С��static���������ݳ�Ա����ռ�������Ĵ�С���洢��data rw��
//�����ռ䣬��������A
//����,�ȿ���ͨ��������ʣ�Ҳ���Բ�ͨ������ֱ��ͨ�����ͷ��ʡ�


class A
{
public:
    int _m,_n;
    static int _share;
};

int A::_share  = 200;


int main()
{
//    A a;
//    cout<<a._share<<endl;
    A::_share = 500;
    cout<<A::_share<<endl;
    return 0;
}

int main1()
{
    A a;
    cout<<a._n<<endl;
    cout<<a._m<<endl;
    cout<<a._share<<endl;

    cout<<sizeof(A)<<sizeof(a)<<endl;

   return 0;
}
