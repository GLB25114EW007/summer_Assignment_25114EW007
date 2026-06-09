#include<iostream>
using namespace std;
int main(){
    int n;
    //Input size of array
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    //Input array elements
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int largest=arr[0], smallest=arr[0];

    // Find largest and smallest
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Largest element= "<<largest<<endl;
    cout<<"Smallest element= "<<smallest<<endl;
}