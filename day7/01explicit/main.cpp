#include <iostream>
using namespace std;

//big three   con/descon   copy   operator=


class mystring
{
public:
    mystring(const char * s = nullptr)
    {
        cout<<"mystring(const char * s = nullptr)"<<endl;
    }

    mystring& operator = (const mystring & another)
    {
        cout<<" mystring operator = (const mystring & another)"<<endl;
    }
};

class Stack
{
public:
    explicit Stack(int size = 1024)
    {

    }
};

int main()
{
//    string s;     //����
//    string s2("china");  //ת������
//    string s3(s2);       //��������
//    string s4 = s3;      //��������
//    string s5;
//    s5 = s4;

    mystring s5("china");           //��ʾ����
//    mystring s6 = (mystring)"china";          //��ʽ����
    s5 = "china";


//    Stack  st(100);
//    Stack  st2 = static_cast<Stack>(100);
    return 0;
}
