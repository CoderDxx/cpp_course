#include <iostream>

#include "mylist.hpp"

using namespace std;
using namespace listspace;

//��ģ���е���Ԫ
//1�������� �Ƽ�
//2������Ķ��崦
//@1 ���������� <>  �������Ǹ�����
//@2 ������ʵ��
//@3 �����������ǰ�棬��ǰ����������������ǰ�����ǰ������

//ģ��ͨ���Ὣ������ʵ�֣�����һ���ļ��м�hpp�С�
//C/C++�еı���ģʽ�ǣ����ļ����б���. ���κ���Ҫʵ�����ĵط�������Ҫ����ģ���ȫò��
int main( )
{
    GenericList<int> first_list(2);
    first_list.add(1);
    first_list.add(2);

    cout<<first_list<<endl;

    GenericList<char> second_list(10);
    second_list.add('A');
    second_list.add('B');
    second_list.add('C');

    cout<<second_list<<endl;
    return 0;
}
