#include<iostream>
using namespace std;
//Function to check perfect number
bool perfect(int num){
    
    int sum=0;
    for(int i=1;i<=num/2;i++){
        if (num%i==0)
        sum=sum+i;
    }
    return(sum==num);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(perfect(n))
    cout<<"Perfect number";
    else
    cout<<"Not an Perfect number";

}
    
