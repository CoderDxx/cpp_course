#include <iostream>
using namespace std;

//һ��������ռ�Ŀռ��Сֻȡ���ڸö��������ݳ�Ա��ռ�Ŀռ䣬�����Ա�����޹�

//��ĳ�Ա����ֻ��һ�ݣ��ڶ�����ù����У��������ĵ�ַ��������Ա���Ϊthis

class Time
{
public:
    Time(int h, int m, int s)
        :_hour(h),_minute(m),_sec(s){}
    void dis(Time * t)
    {
//        cout<<_hour<<_minute<<_sec<<endl;
//        cout<<this->_hour<<this->_minute<<this->_sec<<endl;
        cout<<t->_hour<<t->_minute<<t->_sec<<endl;
    }
private:
    int _hour;
    int _minute;
    int _sec;
};
int main()
{
    cout<<sizeof(Time)<<endl;  //12

    Time t1(1,2,3); t1.dis(&t1);
    Time t2(4,5,6); t2.dis(&t2);
    Time t3(7,8,9); t3.dis(&t3);

    return 0;
}

