#include <iostream>
using namespace std;


class University
{
public:
    University(string t,string l)
    {
        _tower =t;
        _lake = l;
    }
    static  string& getLib()
    {
        return _lib;
    }


    void dis()
    {
        cout<<"��:"<<_tower<<"����"<<_lake<<"ͼ:"<<_lib<<endl;
    }
private:
    string _tower;
    string _lake;
    static string _lib;

};

string University::_lib = "";

int main()
{
    University pk("������","δ����");
    University bs("������","������");
    University xdf("�׷���","����");
    University::getLib() += "�����澭";
    pk.dis();
    University::getLib() += " �й��ھ�������ŵ�����";
    bs.dis();
    University::getLib() += " Ҫ����������ѧӢ��";
    xdf.dis();

    return 0;
}
