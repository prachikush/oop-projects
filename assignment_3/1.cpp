#include<iostream>
using namespace std;
class Complex
{
private:
int real,img;
public:
Complex (int i=0,int r=0)
{
real=r;
img=i;
}
friend ostream  &operator<<(ostream &out,Complex &c);
friend istream &operator>>(istream &in, Complex &c);
};
ostream & operator<<(ostream &out,Complex &c)
{
out<<c.real<<"+i"<<c.img<<endl;
return out;
}
istream &operator>>(istream &in, Complex &c)
{
cout<<"enter real part of complex no.";
in>>c.real;
cout<<"enter imaginary part of complex no.";
in>>c.img;
}
int main()
{
Complex c1;
cin>>c1;
cout<<"complex number:"<<c1;
}
