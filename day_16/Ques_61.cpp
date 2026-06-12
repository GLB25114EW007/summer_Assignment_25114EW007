#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n-1];
    cout<<"Enter "<<n-1<<" elements: \n";
    for(int i=0;i<n-1;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
        sum += arr[i];
    }
    int expected_sum=n*(n+1)/2;
    int missing = expected_sum-sum;
    cout<<"Missing number is: "<<missing;
}