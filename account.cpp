#include<iostream>
#include<string.h>
using namespace std;
class account
{
private:
int accountBalance;
public:
account(int balance)
{
if(balance>=0)
{
accountBalance=balance;
}
else
{
accountBalance=0;
cout<<"initial balance was invalid"<<endl;
}}
void debit(int balance)
{if(accountBalance>=balance)
{
accountBalance= accountBalance-balance;
}
else
{
cout<<"debit amount exceeded the acount balance"<<endl;
}
}
void credit (int balance)
{
accountBalance= accountBalance+balance;
}
int getaccountBalance()
{
return accountBalance;
}
};
int main()
{
account a1(-23);
account a2(456);
cout<<"account1 initial balance is "<<a1.getaccountBalance()<<endl;
cout<<"account2 initial balance is "<<a2.getaccountBalance()<<endl;
a1.credit(100);
a2.credit(78);
cout<<"account1  balance is "<<a1.getaccountBalance()<<endl;
cout<<"account2  balance is "<<a2.getaccountBalance()<<endl;
a1.debit(13);
a2.debit(78);
cout<<"account1  balance is "<<a1.getaccountBalance()<<endl;
cout<<"account2  balance is "<<a2.getaccountBalance()<<endl;
}
