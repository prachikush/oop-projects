
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int i,n,flag=0;
char a[50];
cout<<"enter the string:"<<endl;
cin>>a;
n=strlen(a);

for(i=0;i<n;i++)
{
if(a[i]!=a[n-i-1])
{
flag=1;

}}
if(flag==1)
{
cout<<"array is not palindrome"<<endl;
}
else
{
cout<<"it is  palindrome"<<endl;
}}

