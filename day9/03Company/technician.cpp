#include "technician.h"

Technician::Technician()
{
}

void Technician::init()
{
    _num = _startNumber++;
    _level = 1;
    _moneyPerHour = 100;
    cout<<"�����뼼����Ա��������";
    cin>>_name;
    cout<<"�����뱾�¹�����Сʱ��:";
    cin>>_amountHour;
}

void Technician::promote()
{
    _level += 3;
}

void Technician::calcSalary()
{
    _salary = _amountHour * _moneyPerHour;
}

void Technician::disInfor()
{
    cout<<"����          :"<<_name<<endl;
    cout<<"����          :"<<_num<<endl;
    cout<<"����          :"<<_level<<endl;
    cout<<"���¹�����Сʱ��:"<<_amountHour<<endl;
    cout<<"ÿ������ʱ��нˮ:"<<_moneyPerHour<<endl;
    cout<<"���µĽ����нˮ:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
