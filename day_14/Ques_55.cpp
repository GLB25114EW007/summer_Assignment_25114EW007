#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Element "<<i+1<<" : ";
    cin>>arr[i];
}
int largest= arr[0];
int second_largest= arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
for(int i=0;i<n;i++){
    if(arr[i]>second_largest && arr[i]<largest){
        second_largest=arr[i];
    }
}
cout<<"Second largest element= "<<second_largest<<endl;
}
