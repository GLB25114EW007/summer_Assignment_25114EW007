#include<iostream>
using namespace std;
int main(){
    int n,even_count=0,odd_count=0;
    //Input size of array
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    //Input array elements
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];

        //check even or odd
    if(arr[i]%2==0)
    even_count++;
    else
    odd_count++;
    }

    cout<<"Even elements= "<<even_count<<endl;
    cout<<"Odd elements= "<<odd_count<<endl;
}