#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three numbers:"<<endl;
cin>> a>>b>>c;
if(b>c  & b>a)
{
cout<<b;
cout<<"  is the largest no.";
}
else if(a>b & a>c)
{
cout<<a;
cout<<" is the largest no.";
}
else
{
cout<<c;
cout<<" is the largest no.";
}
} 
