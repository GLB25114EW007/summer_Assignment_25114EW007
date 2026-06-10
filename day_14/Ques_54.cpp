#include<iostream>
using namespace std;
int main(){
    int n,key,count=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Element "<<i+1<<" : ";
    cin>>arr[i];
}
cout<<"Enter element to find frequency: ";
cin>>key;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        count++;
    }
}
cout<<"Frequency of "<<key<<" = "<<count<<endl;
}
