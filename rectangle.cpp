#include<iostream>
#include<string.h>
using namespace std;
class rectangle
{
private:
float width,length;
public:
rectangle()
{
length=1;
width=1;
}
void setwidth(float width)
{if(0.0<width<20.0)
{
this->width=width;
}
else
{
cout<<"invalid input for width";
}
}
void setlength(float length)
{if(0.0<length<20.0)
{
this->length=length;
}
else
{
cout<<"invalid input for length";
}
}
float getwidth()
{
return width;
}
float getlength()
{
return length;
}
float area(float length,float width)
{
return length*width;
}
float perimeter(float length,float width)
{
return 2*(length+width);
}
};
int main()
{
rectangle r1;
rectangle r2;
cout<<"the default value of class rectangle are"<<endl;
cout<<"lenght:"<<r1.getlength();
cout<<endl;
cout<<"width:"<<r1.getwidth();
cout<<endl;
cout<<"the  value of class rectangle on normal input  are"<<endl;
cout<<"length:";
r2.setlength(35);
cout<<r2.getlength();
cout<<endl;
cout<<"width:";
r2.setwidth(75);
cout<<r2.getwidth()<<endl;
cout<<"aarea:";
cout<<r2.area(35,75);
cout<<endl;
cout<<"perimeter:"<<r2.perimeter(35,75);
cout<<endl;
}
