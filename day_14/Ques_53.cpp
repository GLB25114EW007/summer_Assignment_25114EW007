#include<iostream>
using namespace std;
int linear_search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the element to search for: ";
    cin>>key;
    int result= linear_search(arr,n,key);
    if(result!= -1){
        cout<<"Element found at index: "<<result<<endl;

    }
    else{
        cout<<"Element not found in the array. "<<endl;
    }

}