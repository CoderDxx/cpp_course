#include "salesman.h"

SalesMan::SalesMan()
{
}
void SalesMan::init()
{
    _rate= 0.04;
    _num = _startNumber++;
    _level = 1;
    cout<<"��������Ա��������";
    cin>>_name;
    cout<<"�����뱾�����۶�: ";
    cin>>_saleAmount;
}

void SalesMan::promote()
{
    _level += 1;
}

void SalesMan::calcSalary()
{
    _salary = _saleAmount * _rate;
}

void SalesMan::disInfor()
{
    cout<<"����          :"<<_name<<endl;
    cout<<"����          :"<<_num<<endl;
    cout<<"����          :"<<_level<<endl;
    cout<<"���µ����۶��:"<<_saleAmount<<endl;
    cout<<"���µ���ɱ���:"<<_rate<<endl;
    cout<<"���½����нˮ:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
