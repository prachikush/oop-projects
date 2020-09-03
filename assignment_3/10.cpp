#include<iostream>
#include<string>
using namespace std;
bool testPalindrome(string s,int first=0,int last=0){
    if(first==last || s.size()==0)
        return true;
    if(s[first]!=s[last])
        return false;
    if(first<last+1)
        return testPalindrome(s,first+1,last-1);
}
int main(){
string s;
cout<<"enter the string:";
getline(cin,s);
if(testPalindrome(s,0,s.size()-1))
{
    cout<<"it is a palindrome";
}
else {
cout<<"it is not a palindrome";}
return 0;
}
