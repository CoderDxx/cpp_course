#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mystack.h"
#include "mystack.cpp"
using namespace std;

//�ռ����ͣ�ѹ�����ͣ���������




//����ģ��        ģ�庯��         ��������
//myswap   ->    myswap<int> -> myswap<int>(a,b)

//��ģ��        ģ����         �����
//Stack        Stack<int>    Stack<int> s

int main()
{
    Stack<string>  s;

     if(!s.isFull())
            s.push("abc");
     if(!s.isFull())
            s.push("xxxx");
     if(!s.isFull())
            s.push("yyyy");

    while(!s.isEmpty())
    {
        cout<<s.pop()<<endl;
    }
    return 0;
}
