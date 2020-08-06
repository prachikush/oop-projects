#include<iostream>
using namespace std;
int main()
{
int a[50],n,i,j,key;
cout <<"enter the lenght of array";
cin>> n;
cout <<"enter the array elements:" ;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for (i=0;i<n;i++)
{
key=a[i];
j=i-1;
while(j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
cout<<"sorted array is :";
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
}
