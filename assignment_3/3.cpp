#include<iostream>
using namespace std;
class Complex
{
private:
int real,img;
public:
Complex(int i=0,int r=0)
{real=r;
img=i;
}
void display()
{
cout<<real<<"+i"<<img<<endl;
}
bool operator == (Complex const &obj)
{
if(real==obj.real&& img==obj.img)
{
return true;
}
else
{
return false;
}}
bool operator !=(Complex const &obj)
{
if (real!=obj.real ||img!=obj.img)
{
return true;
}
else
{
return false;
}
}};
int main()
{
Complex c1(12,90),c2(12,90),c3(3,9),c4(1,1);
bool vr1=c1==c2, vr2=c3!=c4;
cout<<"first complex no. :";
c1.display();
cout<<"second complex no. :";
c2.display();
cout<<"third complex no. :";
c3.display();
cout<<"fourth complex no. :";
c4.display();

if(vr1==1)
{
cout<<"\n 1st and 2nd complex no. are equal"<<endl;
}
else{
cout<<" 1st and 2nd complex no. are not equal"<<endl;
}
if(vr2==1)
{
cout<<"\n 3rd and 4th complex no. are not equal"<<endl;
}
else{
cout<<" 3rd and 4th complex no. are  equal"<<endl;
}}

