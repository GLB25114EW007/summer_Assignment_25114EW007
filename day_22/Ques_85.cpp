#include<iostream>
using namespace std;
int main(){
    string str,rev;
    cout<<"Enter a string: ";
    cin>>str;
    //reverse the string
    for(int i=str.length()-1;i>=0;i--){
        rev+=str[i];
    }
    //check palindrome
    if(str==rev)
    cout<<"The string is a palindrome.";
    else
    cout<<"The string is not a palindrome.";
}