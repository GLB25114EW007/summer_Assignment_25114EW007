#include<iostream>
using namespace std;
int main(){
    int n,target;
    bool found=false;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: \n";
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter target sum: ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<target<<endl;
                found=true;
            }
        }
    }
    if(!found){
        cout<<"No pair found.";
    }
}