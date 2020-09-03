#include<iostream>
#include<stdlib.h>
using namespace std;
void printarray(int *a,int first,int last){
if(first==last){
    exit;}
if(first!=last)
 {   cout<<a[first]<<endl;
}
if(first<last)
{
    return printarray(a,first+1,last);
}

}
int main(){int n;
cout<<"enter the size of array:";
cin>>n;
int a[n];
cout<<"enter the elements of array:";
for(int i=0;i<n;i++)
{
 cin>>a[i];}
printarray(a,0,n);
return 0;
}
