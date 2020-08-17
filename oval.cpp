#include<iostream>
using namespace std;
int main()
{
int r,i,j;
cout<<"enter the no. of rows";
cin>>r;
for(i=1;i<=r;i++)
{
for(j=1;j<=1;j++)
{
if(i==1 ||i==r)
{
cout<<"  ***  ";
}
else if(i==2 ||i==(r-1))
{
cout<<" *   * ";
}
else
{
cout<<"*     *";
}
}
cout<<endl;
}}
