#include<iostream>
#include<math.h>
using namespace std;
class Volume
{
private:
float radius;
public :
Volume(float r)
{
cout<<"enter the the radius:";
cin>>r;
radius=r;
}
inline float sphereVolume()
{
return ((4.0*3.14159*pow(radius,3))/3.0);
}};
int main()
{
float r;
Volume v1(r);
cout<<"volume=";
cout<<v1.sphereVolume()<<endl;
}
