#include <iostream>

using namespace std;

//ͨ�������ķ�ʽ����֪�����÷�����δ���
void func() throw(char)
{
    throw 'a';
}
//ʲô��û��д�����-> ����
//д��ʲô,�����Լ����Դ���Ĳ��� ������ƥ������
void foo()
{
    try
    {
        func();
    }catch(int i)
    {
        cout<<"foo() catch "<<i<<endl;
    }catch(...) //����ƥ�䣬д��־����
    {
        cout<<"log throw up"<<endl;
        throw;
    }
}
int main()
{
    try{
        foo();
    }catch(int i){
        cout<<"main() catch int "<<i<<endl;
    }catch(double i){
        cout<<"main() catch double "<<i<<endl;
    }catch(...)
    {
        cout<<"Game over"<<endl;
    }
    return 0;
}
