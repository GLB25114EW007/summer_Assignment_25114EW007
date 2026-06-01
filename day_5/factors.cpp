#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";//taking input from user
    cin>>n;
    for(int i=1;i<=n;i++){
        //checking if the number is a factor of n
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    //printing the factors of n
    cout<<"are the factors of "<<n;
}