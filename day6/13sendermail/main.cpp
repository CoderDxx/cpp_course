#include <iostream>

using namespace std;


class Mail
{
    friend class Sender;
public:
    Mail(string t, string c)
        :_title(t),_contents(c){}
private:
    string _title;
    string _contents;
};

class Sender
{
public:
    Sender(string addr)
        :_addr(addr){}

    Sender& operator<<(const Mail & mail)
    {
        cout<<mail._title<<endl;
        cout<<mail._contents<<endl;
        return *this;
    }

private:
    string _addr;
};



int main()
{
    Sender sender("guilin_wang@163.com");
    Mail   mail("����","������׷ֺ���������");
    Mail   mail2("֪ͨ","���ڳ������λ��ϵ�֪ͨ");

    sender<<mail<<mail2;  // sender.operator<<(mail);

    return 0;
}
