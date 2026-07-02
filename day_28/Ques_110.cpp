#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    string accountHolderName;
    double balance;

    public:
    void createAccount(){
        cout<<"Enter Account Number:";
        cin>>accountNumber;
        cin.ignore();
        cout<<"Enter Account Holder Name:";
        getline(cin,accountHolderName);
        cout<<"Enter Initial Balance:";
        cin>>balance;
    }

    void deposit(){
        double amount;
        cout<<"Enter amount to deposit:";
        cin>>amount;
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully!\n";
        }
        else{
            cout<<"Invalid amount!\n";
        }
    }

    void withdraw(){
        double amount;
        cout<<"Enter amount to withdraw:";
        cin>>amount;
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"Amount withdrawn successfully!\n";
        }
        else{
            cout<<"Invalid amount or insufficient balance!\n";
        }
    }
    void display(){
        cout<<"\nAccount Number:"<<accountNumber;
        cout<<"\nAccount Holder Name:"<<accountHolderName;
        cout<<"\nBalance:"<<balance<<endl;
    }
};
int main(){
    BankAccount account;
    int choice;
    do{
        cout<<"\nBank Account Management System\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Display Account Details\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.display();
                break;
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice! Please try again.\n";
        }
    }while(choice!=5);
    return 0;
}