#include<iostream>
using namespace std;
class Car
{
public:
char car;
float hour,charge;
public:
Car(char c,float h)
{
car=c;
cout<<"enter no. of hours:"<<car<<"parked=";
cin>>h;
hour=h;
}
void calculateCharges()
{
if(hour>0&&hour<=3)
{
charge=2;
}
else if(hour>3 && hour<24)
{
float hr=hour-3;
charge=2+(0.5*hr);
if (charge>10)
{
charge=10;
}
else
{
charge=10;
}}}};
int main ()
{
float h;
Car c1('1',h),c2('2',h),c3('3',h);
cout<<"car	hours	 charge"<<endl;
c1.calculateCharges();
cout<<c1.car;
cout<<"		"<<c1.hour;
cout<<"		"<<c1.charge<<endl;
c2.calculateCharges();
cout<<c2.car;
cout<<"         "<<c2.hour;
cout<<"         "<<c2.charge<<endl;

c3.calculateCharges();
cout<<c3.car;
cout<<"         "<<c3.hour;
cout<<"         "<<c3.charge<<endl;
}
