//#include <iostream>
#include "box.h"
#include "gtest/gtest.h"
using namespace std;

/*int main()
{ int res;

    Box b;
    Box b1(2,3,4);
   res= b1.volume(5,3,4);
   cout<<res<<endl;
    return 0;

}*/
TEST(Box1,volume_check) {
     Box b1;
    EXPECT_EQ(60,b1.volume(5,3,4));
    EXPECT_EQ(60,b1.volume(5,6,2));
    //EXPECT_EQ(0,a1.getCustomerName().length());
}
