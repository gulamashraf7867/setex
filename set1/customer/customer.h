#include<iostream>
using namespace std;
class Customer
{
private:
    int m_custid;
    double m_balance;
    string m_type,m_custname,m_phone;
public:
    Customer();
    Customer(int,string,string,double);
    Customer(int,int,int);
    Customer(const Customer& ref);
   double credit(double);
   double debit(double);
    double getBalance(double);
    string makecall(double);
   double display();
};
