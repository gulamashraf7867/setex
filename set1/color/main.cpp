#include <iostream>
#include "color.h"
#include "gtest/gtest.h"
using namespace std;

/*TEST(Box1,invert_check) {
     Color c1;
    EXPECT_EQ(35,c1.invert(220,255,0));
   // EXPECT_EQ(60,b1.volume(5,6,2));
}*/

int main()
{
    Color c1(220,255,0);
    int k;
k=c1.invert(220,255,0);
cout<<k<<endl;

}
