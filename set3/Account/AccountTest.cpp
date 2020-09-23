#include<gtest/gtest.h>
#include"account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

TEST(CreditAccount,DefaultConstructor) {
    AccountBase *ca1;
   ca1 = new CreditAccount("thameem","asdf",500);
//    CreditAccount ca1("thameem","xyz",500);
    EXPECT_EQ(480,ca1->debit(20));
    EXPECT_EQ(492,ca1->credit(12));

}
