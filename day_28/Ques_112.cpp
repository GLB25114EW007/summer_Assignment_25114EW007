#include<iostream>
#include<string>
using namespace std;

class Contact{
    private:
    string name;
    string phoneNumber;
    string email;

    public:
    void addContact(){
        cin.ignore();
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter Phone Number:";
        getline(cin,phoneNumber);
        cout<<"Enter Email:";
        getline(cin,email);

        cout<<"\nContact added successfully!\n";
    }
    void displayContact(){
        cout<<"\nName:"<<name;
        cout<<"\nPhone Number:"<<phoneNumber;
        cout<<"\nEmail:"<<email<<endl;
    }
};

int main(){
    Contact contact;
    int choice;
    do{
        cout<<"\nContact Management System\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display Contact\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                contact.addContact();
                break;
            case 2:
                contact.displayContact();
                break;
            case 3:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    }while(choice!=3);
    return 0;
}