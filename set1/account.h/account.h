#include<string>
using namespace std;
class Account {
  int customerId; // ideally to be of string type
  string customerName;
  double balance;

public:
  Account();
  Account(int, string, double);
  //Account(const Account &);
  void credit(double);
  void debit(double);
  int getCustomerId();
  string getCustomerName();
  double getBalance() const;
  void display();
};
