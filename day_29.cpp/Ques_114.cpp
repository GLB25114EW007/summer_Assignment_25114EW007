#include<iostream>
using namespace std;

int main(){
    int arr[100],n,choice,i,key;
    int sum=0;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    cout<<"Enter "<<n<<" elements:\n ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    do{
        cout<<"\nMENU-DRIVEN ARRAY OPERATIONS\n";
        cout<<"1. Display the array\n";
        cout<<"2. Calculate the sum of elements\n";
        cout<<"3. Search for an element\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Array elements are: ";
                for(i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
            case 2:
                sum=0;
                for(i=0;i<n;i++){
                    sum+=arr[i];
                }
                cout<<"Sum of elements: "<<sum<<endl;
                break;
            case 3:
                cout<<"Enter the element to search: ";
                cin>>key;
                for(i=0;i<n;i++){
                    if(arr[i]==key){
                        cout<<"Element "<<key<<" found at index "<<i<<endl;
                        break;
                    }
                }
                if(i==n){
                    cout<<"Element "<<key<<" not found in the array."<<endl;
                }
                break;
            case 4:
                cout<<"Exiting the program. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }

    } while(choice != 4);
    return 0;
}