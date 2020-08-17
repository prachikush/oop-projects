#include<iostream>
#include<string.h>
using namespace std;
class date
{
private:
int month,day,year;
public:
date(int m,int d,int y)
{
if(m>=1 && m<=12)
{
month=m;
}
else
{
month=1;
 }
day=d;
year=y;
}
void setmonth(int m)
{
if(m>=1 && m<=12)
{
month=m;
}
else
{
month=1;
 }
}
void setyear(int y)
{
year=y;
}
void setday(int d)
{
day=d;
}
int getmonth()
{
return month;
}
int getyear()
{
return year;
}
int getday()
{
return day;
}
void displaydate()
{
cout<<month<<"/"<<day<<"/"<<year<<endl;
}
};
int main()
{
date d1(12,4,2020);
cout<<"date is : ";
d1.displaydate();
d1.setmonth(0);
d1.setyear(2334);
cout<<"date is : ";
d1.displaydate();
}
