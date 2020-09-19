#include<iostream>
#include "box.h"
using namespace std;

Box::Box(){};
Box::Box(int l,int b, int h): m_length(l), m_breadth(b), m_height(h){}
Box::Box(int a): m_length(a){};
Box::Box(const Box &ref): m_length(ref.m_length),m_breadth(ref.m_breadth),m_height(ref.m_height){}

int length(int m_length){
int l;
l=m_length;
return(l);
}
int breadth(int m_breadth)
{
    int b;
    b=m_breadth;
    return(b);
}
int height (int m_height)
{

    int h;
    h=m_height;
    return(h);
}
int  Box::volume(int a, int b, int c)
{
    int vol;
    vol=a*b*c;
    return(vol);
}
