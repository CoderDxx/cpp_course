#include <iostream>

using namespace std;

//���麯���� virual   û��ʵ���壬������ʼ����Ϊ0��
//���ӿ��࣬������壬ӵ�д��麯�������д��麯�����࣬��Ϊ������ࡣjava Interface
//������� ����ʵ����
//���������޸�д������ȻΪ���飬Ȼ����ʵ������


//��������  ��

class Shape
{
public:
    Shape(int x =0 , int y = 0)
        :_x(x),_y(y){
    }
    virtual void draw() = 0;
protected:
    int _x;
    int _y;
};


class Circle:public Shape
{
public:
    Circle(int x=0, int y=0, int r=0)
        :Shape(x,y),_radius(r){

    }
    virtual void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }

protected:
    int _radius;
};

class Rect:public Shape
{
public:
    Rect(int x = 0, int y = 0 , int w = 0 ,int l = 0)
        :Shape(x,y),_width(w),_lenth(l){}

    virtual void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"
          <<"_width"<<_width<<"lenth"<<_lenth<<endl;
    }

protected:
    int _width;
    int _lenth;
};


int main()
{
    Shape *ps;
    return 0;
}
