#include "salemanager.h"

SaleManager::SaleManager()
{

}

void SaleManager::init()
{
    _fixedSalary = 5000;
    _num = _startNumber++;
    _level = 1;
    _rate= 0.05;
    cout<<"���������۾����������";
    cin>>_name;
    cout<<"�����뱾�����۶�: ";
    cin>>_saleAmount;
}

void SaleManager::promote()
{
    _level += 3;
}

void SaleManager::calcSalary()
{
    _salary = _fixedSalary + _saleAmount *_rate;
}

void SaleManager::disInfor()
{
    cout<<"����          :"<<_name<<endl;
    cout<<"����          :"<<_num<<endl;
    cout<<"����          :"<<_level<<endl;
    cout<<"���¹̶���нˮ:"<<_fixedSalary<<endl;
    cout<<"ÿ�������۶��:"<<_saleAmount<<endl;
    cout<<"���µ���ɱ���:"<<_rate<<endl;
    cout<<"���µĽ���нˮ:"<<_salary<<endl;
    cout<<"==============================="<<endl;
}
