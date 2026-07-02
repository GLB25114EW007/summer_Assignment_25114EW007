#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,choice,searchID;
    int bookID[100];
    string title[100],author[100];
    bool issued[100];

    cout<<"Enter number of books:";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        cout<<"Enter details of Book"<<i+1<<endl;
        cout<<"Book ID:";
        cin>>bookID[i];
        cin.ignore();
        cout<<"Title:";
        getline(cin,title[i]);
        cout<<"Author:";
        getline(cin,author[i]);
        issued[i]=false; // Initially, all books are not issued
    }
    do{
        cout<<"MINI LIBRARY SYSTEM"<<endl;
        cout<<"1. Display all books"<<endl;
        cout<<"2. Issue a book"<<endl;
        cout<<"3. Return a book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"BOOK DETAILS"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"Book ID:"<<bookID[i]<<endl;
                    cout<<"Title:"<<title[i]<<endl;
                    cout<<"Author:"<<author[i]<<endl;
                    cout<<"Issued:"<< (issued[i] ? "Yes" : "No") << endl;
                }
                break;

            case 2:
                cout<<"Enter Book ID to issue:";
                cin>>searchID;
                for(int i=0;i<n;i++){
                    if(bookID[i]==searchID){
                        if(!issued[i]){
                            issued[i]=true;
                            cout<<"Book issued successfully."<<endl;
                        }else{
                            cout<<"Book is already issued."<<endl;
                        }
                        break;
                    }
                    if(i==n-1){
                        cout<<"Book ID not found."<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter Book ID to return:";
                cin>>searchID;
                for(int i=0;i<n;i++){
                    if(bookID[i]==searchID){
                        if(issued[i]){
                            issued[i]=false;
                            cout<<"Book returned successfully."<<endl;
                        }else{
                            cout<<"Book was not issued."<<endl;
                        }
                        break;
                    }
                    if(i==n-1){
                        cout<<"Book ID not found."<<endl;
                    }
                }
                break;

            case 4:
                cout<<"Exiting the system."<<endl;
                break;

            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }while(choice!=4);
}