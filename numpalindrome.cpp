#include<iostream>
using namespace std;
int main()
{
int n,t,r=0;
cout<<"enter the number: ";
cin>>n;
t=n;
while(t!=0)
{
r=r*10;
r=r+(t%10);
t=t/10;
}
if(n==r)
{
cout<<"number is palindrome"<<endl;
}
else
{
cout<<"number is not palindrome"<<endl;
}
}
