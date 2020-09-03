#include<iostream>
using namespace std;
int main()
{
int n=1000,i,j,flag=0;
int a[n];
cout<<"array:"<<endl;
for(i=0;i<n;i++)
{
a[i]=1;
}
//part 1
for(i=0;i<n;i++)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{a[i]=0;
flag=1;
break;
}
}
if(flag==0)
{
a[i]=1;}
}
//part 2
for(i=2;i<n;i++)
{
if(a[i]==1){
for(j=i+1;j<n;j++)
{if(j%i==0)
{
a[j]=0;
}
}}}
for(i=1;i<n;i++)
{
if(a[i]==1)
{
cout<<i<<"is a prime no."<<endl;}}}
