#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]= temp;
    }
    cout<<"Reversed array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 