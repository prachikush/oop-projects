#include<iostream>
using namespace std;
class invoice
{
private:
string prtno,dis;
int quantity,price;
public:
invoice()
{
cout<<"enter the part no.:";
setPartNo();
cout<<"enter discription:";
setDiscription();
cout<<"enter quantity:";
setQuantity();
cout<<"enter price:";
setPrice();
}
void setPartNo()
{
getline(cin,prtno);
}
void setDiscription()
{
getline(cin,dis);
}
void setQuantity()
{
cin>>quantity;
}
void setPrice()
{
cin>>price;
}
string getPartNo()
{
return prtno;
}
string getDiscription()
{
return dis;
}
int getQuantity()
 {
return quantity;
}
int getPrice()
{
return price;
}
int getinvoiceAmount()
{
return quantity*price;
}
};
int main()
{
invoice i1;

cout<<" part no.:"<<i1.getPartNo()<<endl;
cout<<" discription:"<<i1.getDiscription()<<endl;
cout<<" quantity:"<<i1.getQuantity()<<endl;
cout<<" price:"<<i1.getPrice()<<endl;
cout<<"TOTAL AMOUNT:"<<i1.getinvoiceAmount()<<endl;
}

