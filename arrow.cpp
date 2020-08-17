#include<iostream>
using namespace std;
int main()
{
int i,j,r,c,row,k;
cout<<"enter the no. of columns:";
cin>>c;
cout<<"enter the no. of rows";
cin>>row;
if(c%2==0)
{
c=c+1;
}
r=((c/2)+1);
for (i=1;i<=r;i++)
{
for(j=1;j<=(r-i);j++)
{
cout<<" ";
}
for(k=1;k<=((2*i)-1);k++)
{
cout<<"*";
}
cout<<endl;
}
for(i=r+1;i<=row;i++)
{
for(j=1;j<=(c/2);j++)
{
cout<<" ";
}
cout<<"*";
cout<<endl;
}
}
