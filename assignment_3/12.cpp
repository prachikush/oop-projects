#include<iostream>
#include<stdlib.h>
using namespace std;
void stringReverse(string a,int first){
if(first==a.size())
    exit;
if(first!=a.size())
    cout<<a[a.size()-first-1];
if(first<a.size())
    return stringReverse(a,first+1);
}
int main(){string a;
cout<<"enter the string:";
getline(cin,a);
stringReverse(a,0);
return 0;
}

