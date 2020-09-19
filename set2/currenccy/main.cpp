
#include "currency.h"
#include <gtest/gtest.h>

TEST(Currency,DefaultConstructor) {
    Currency a1;
    EXPECT_EQ(0,a1.getP());
    //EXPECT_EQ(0,a1.getimag());


}

TEST(currency,bas_hojja)
{
    Currency a1(10,5);
    Currency a2(15,2);
    Currency a3;
    a3=a1+a2;
    std::string ExpectedOut="25:7\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency1,bas_hojja)
{
    Currency a1(10,5);
    Currency a2(15,2);
    Currency a3;
    a3=a1-a2;
    std::string ExpectedOut="-5:3\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency2,bas_hojja)
{
    Currency a1(10,5);
    Currency a2(15,2);
    Currency a3;
    a3=a1*a2;
    std::string ExpectedOut="150:10\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
TEST(currency4,bas_hojja)
{
    Currency a1(10,5);
    Currency a2(5,2);
    Currency a3(0,0);
    a3=a1<a2;
    std::string ExpectedOut="1\n";
    testing::internal::CaptureStdout();
    a3.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();

    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());
}
