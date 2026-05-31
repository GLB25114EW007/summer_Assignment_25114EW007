#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,r,sum=0,n1,c=0;
    cout<<"Enter a number: ";//input number
    cin>>n;
    n1=n;
    //count the number of digits in the number
    while(n1!=0){
        n1=n1/10;
        c++;
    }
    n1=n;
    //calculate armstrong value
    while(n1!=0){
        r=n1%10;
        sum=sum+round(pow(r,c));
        n1=n1/10;
    }
    //check if the number is an armstrong number or not
    if(sum==n){
        cout<<n<<" is an Armstrong number.";
    }
    else{
        cout<<n<<" is not an Armstrong number.";
    }
}