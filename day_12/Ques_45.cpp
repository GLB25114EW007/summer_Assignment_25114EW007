#include<iostream>
using namespace std;
//Function to check palindrome
bool palindrome(int num){
    int n1=num;
    int rev=0;
    while(num!=0){
        int digit = num % 10;
        rev=rev*10+digit;
        num=num/10;
    }
    return(n1==rev);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (palindrome(n))
    cout<<"Palindrome number";
    else
    cout<<"Not a palindrome number";
}