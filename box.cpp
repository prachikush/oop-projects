#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,b;
cout <<" enter the number of rows and columns: "<<endl;
cin>>l>>b;
for(i=0;i<l;i++)
{
 for(j=0;j<b;j++)
 {
 if(i==0||i==(l-1) ||j==0||j==(b-1))
   {
    cout<<"*";
    }
 else
   {
   cout<<" ";
   }
  
  }cout <<endl;

}
}
