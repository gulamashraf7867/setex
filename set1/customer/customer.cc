#include "customer.h"
#include<iostream>

Customer::Customer(){};
Customer::Customer(int m_custidd,string m_custnamee,string m_phonee ,double m_balancee):m_custid(m_custidd),m_custname(m_custnamee),m_phone(m_phone),m_balance(m_balancee){};
Customer::Customer(const Customer& ref):m_custid(ref.m_custid),m_custname(ref.m_custname),m_phone(ref.m_phone),m_balance(ref.m_balance){};
double Customer::getBalance(double bal)
{
    m_balance= bal;
    return(m_balance);
}

double Customer::credit(double cred)
{
    double temp=0.0;
    temp =  getBalance(m_balance);
    double res=0.00;
    res=cred+m_balance;
    return(res);
}
double Customer::debit(double deb)
{
double res=0.0;
res=m_balance-deb;
return(res);
}
string Customer::makecall(double m_balance)
{
    if(m_balance>0)
        return("call");
    else
        return("no call");
}
double Customer::display()
{
    cout<<m_balance;
    cout<<m_custid;
    cout<<m_phone;
    cout<<m_balance;
}

