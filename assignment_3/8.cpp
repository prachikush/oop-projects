#include<iostream>
using namespace std;
int main()
{
int a=0,b=0,c=0;
cout<<"pythagorean triplets:"<<endl;
for(a=1;a<=500;a++)
{
for(b=1;b<=500;b++)
{
for(c=1;c<=500;c++)
{
if((a*a)+(b*b)==(c*c) && c<=500)
{
cout<<a<<","<<b<<","<<c<<endl;
}
}}}return 0;
}
