#include<iostream>
using namespace std;
int main()
{
int n,c=0,i;
cout<<"enter the number: ";
cin>>n;
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{
++c;
}
}
if(c==1)
{
cout<<"number is prime"<<endl;
}
else
{
cout<<"number is not prime"<<endl;
}}
