#include <iostream>
#include "customer.h"
#include "gtest/gtest.h"
using namespace std;

/*int main()
{
    Customer c1(12476,"thameem","9902733166",6328.086);
    cout<<c1.Customer::credit (100.0734)<<endl;


}*/
TEST(Box1,volume_check) {
     Customer b1(12345,"thameem","99027",6546.0896);

    EXPECT_EQ(6546.089,b1.getBalance(6546.089));

    //EXPECT_EQ(0,a1.getCustomerName().length());
}
TEST(customer,cuatomer_details)
{
    Customer b1(12345,"thameem","99027",6546.0896);
    EXPECT_EQ(6646.089,b1.credit(100));
}
