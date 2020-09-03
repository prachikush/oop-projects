#include<iostream>
using namespace std;
class Complex
{
private:
int img ,real;
public:
Complex(int i=0,int r=0)
{
real=r;
img=i;
}
friend Complex operator * (Complex const &obj1,Complex const &obj2);
void display()
{
cout<<"complex no. after multiplication:"<<real<<"+i"<<img<<endl;
}};
Complex operator * (Complex const &obj1,Complex const &obj2)
{
Complex temp;
temp.real= -(obj1.img*obj2.img)+(obj1.real*obj2.real);
temp.img= (obj1.real*obj2.img)+(obj1.img*obj2.real);
return temp;
}
int main()
{
Complex c1(8,7),c2(2,7);
cout<<"complex no. are:(8+7i),(2+7i)"<<endl;
Complex c3=c1*c2;
c3.display();
}
