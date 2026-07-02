#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    int choice,i;

    cout<<"Enter a string: ";
    getline(cin, str);

    do{
        cout<<"\nMENU-DRIVEN STRING OPERATIONS\n";
        cout<<"1. Display the string\n";
        cout<<"2. Calculate the length of the string\n";
        cout<<"3. Search for a character\n";
        cout<<"4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"String is: "<<str<<endl;
                break;
            case 2:
                cout<<"Length of the string: "<<str.length()<<endl;
                break;
            case 3:
                char ch;
                cout<<"Enter the character to search: ";
                cin>>ch;
                for(int i=0;i<str.length();i++){
                    if(str[i]==ch){
                        cout<<"Character "<<ch<<" found at index "<<i<<endl;
                        break;
                    }
                }
                if(i==str.length()){
                    cout<<"Character "<<ch<<" not found in the string."<<endl;
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