#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: \n";
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int size=0;
    for(int i=0;i<n;i++){
        bool duplicate=false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            arr[size++]=arr[i];
        }
    }
    cout<<"Array after removing duplicates: \n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}