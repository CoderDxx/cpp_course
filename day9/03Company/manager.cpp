#include "manager.h"

Manager::Manager()
{

}
void Manager::init()
{
    _fixedSalary = 8000;
    _num = _startNumber++;
    _level = 1;
    cout<<"�����뾭���������";
    cin>>_name;
    _salary = 0;
}

void Manager::promote()
{
    _level += 4;
}

void Manager::calcSalary()
{
    _salary += _fixedSalary;
}

void Manager::disInfor()
{
    cout<<"����          :"<<_name<<endl;
    cout<<"����          :"<<_num<<endl;
    cout<<"����          :"<<_level<<endl;
    cout<<"���µĽ����нˮ:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}

void Manager::addSalary(float money)
{
    _salary += money;
}
