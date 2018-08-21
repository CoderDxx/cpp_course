#include <iostream>
#include <math.h>

using namespace std;

//��������ľ���
//ǰ������������ ǰ����������һ�ֲ���ȫ���͵����������ܶ������
//���Զ���ָ������� �������ͷ���ֵ�������ں��������С�

class Point;

class ManagePoint
{
public:
    float getDistance(const Point* p1, const Point * p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point* p1, const Point * p2);
public:
    Point(int x = 0,int y =0)
        :_x(x),_y(y){}
    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }


private:
    float _x;
    float _y;

};

float ManagePoint::getDistance(const Point *p1, const Point *p2)
{
    float dx = p1->_x - p2->_x;
    float dy = p1->_y - p2->_y;

    return sqrt(dx*dx+dy*dy);
}



int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();

    ManagePoint mp;

    cout<<"dis:"<<mp.getDistance(&p1,&p2)<<endl;

    return 0;
}


#if 0
#include <iostream>
#include <math.h>

using namespace std;

//��������ľ���
//ǰ������������ ǰ����������һ�ֲ���ȫ���͵����������ܶ������
//���Զ���ָ������� �������ͷ���ֵ�������ں��������С�

class Point;




class ManagePoint
{
public:
    float getDistance(const Point& p1, const Point & p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point& p1, const Point & p2);
public:
    Point(int x = 0,int y =0)
        :_x(x),_y(y){}
    void dumpFormat()
    {
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }


private:
    float _x;
    float _y;

};

float ManagePoint::getDistance(const Point& p1, const Point & p2)
{
    float dx = p1._x - p2._x;
    float dy = p1._y - p2._y;

    return sqrt(dx*dx+dy*dy);
}



int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();

    ManagePoint mp;

    cout<<"dis:"<<mp.getDistance(p1,p2)<<endl;

    return 0;
}

#endif
