#include<iostream>
#include<cmath>
using namespace std;
//Function to check armstrong
bool armstrong(int num){
    int n1=num;
    int sum=0,digits=0;
    int temp=num;
    while(temp!=0){
        digits++;
        temp/=10;
    }
    temp=num;
    while(temp!=0){
        int r = temp%10;
        sum=sum+ round(pow(r,digits));
        temp/=10;
    }
    return(sum==n1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(armstrong(n))
    cout<<"Armstrong number";
    else
    cout<<"Not an Armstrong number";

}
    
