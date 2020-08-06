#include<iostream>
using namespace std;
int main()
{
int a[50],n,i,largest,second;
cout<<"enter the number of element to be entered"<<endl;
cin>>n;
cout<<"enter the element"<<endl;
for(i=0 ; i<n ; i++)
{
cin>>a[i];
}
if(a[1]>a[0])
{
largest=a[1];
second=a[0];
}
else
{
largest=a[0];
second=a[1];
}
for(i=2;i<n;i++)
{
if(a[i]>largest)
{
second=largest;
largest=a[i];
}
else if(a[i]>second && a[i] <largest)
{
second=a[i];
}
}
cout<<"second max"<<second<<endl;
return 0;
}
