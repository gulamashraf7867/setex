#include<iostream>
#include "color.h"

using namespace std;
Color::Color(){};
Color::Color(int r,int g,int b):m_r(r),m_g(g),m_b(b){};
Color::Color(int rgb): m_r(rgb){};
int Color::invert(int m_r,int m_g, int m_b)
{
    int i_r,i_g,i_b;
    i_r=255-m_r;
    i_g=255-m_g;
    i_b=255-m_b;
    int i;
    for(i=0;i<=255;i++)
    {
        if(i==35)
        {
          return(i));
            break;
        }
         if(i==i_g)
        {
            return(i);
            break;
        }
         if(i==i_b)
        {
            return(150);
            break;
        }
    }
}

