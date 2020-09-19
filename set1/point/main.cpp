#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p(10,10);
    p.display();
    p.isONXAxis();
    p.display();
    p.isOnYAxis();
    p.display();
    return 0;
}
