#include <iostream>
using namespace std;


//��ʦ   ����   �Ա�   ����    �̿�    �Է�    ˯��
//ѧ��   ����   �Ա�   ����    ѧϰ    �Է�    ˯��


//����                                  �Է�                          ����           ����
//                                                                   �̳й�ϵ       ������ϵ

//              ��ʦ           �̿�               ѧϰ     ѧ��        ����           ������

class Human                   //����
{
public:
    void eat(string food)
    {
        cout<<food<<endl;
    }
};

class Teacher: public Human     //����
{
public:
    void teach(string course)
    {
        cout<<"i am a teacher i am teaching "<<course<<endl;
    }
};

class Student:private Human
{
public:
    void study(string course)
    {
        cout<<"i am student  i am learing "<<course<<endl;
    }
};

class Worker:public Human
{

};

int main()
{
    Teacher t;
    t.teach("C++");
    t.eat("����ţ����");

    Student s;
    s.study("C++");
    s.eat("��̳���ţţ��");
    return 0;
}
