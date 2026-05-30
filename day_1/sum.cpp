#include<iostream>
using namespace std;
int main(){
    int N, sum=0;
    //Take input from the user
    cout<<"enter the value of N : ";
    cin>>N;
    for(int i=1; i<=N; i++){
        sum+=i;
    }
    cout<<"the sum of first "<<N<<" natural numbers is : "<<sum;
    return 0;
}
