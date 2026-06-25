#include<iostream>
using namespace std;
int main(){
    int pin=4321,enteredPin;
    int choice;
    double balance=325000.0;
    double amount;

    cout<<"==== ATM Simulation ===="<<endl;
    cout<<"Enter your PIN: ";
    cin>>enteredPin;

    if(enteredPin!=pin){
        cout<<"Incorrect PIN! Access denied."<<endl;
        return 0;
    }
    do{
        cout<<"\n----- MENU -----"<<endl;
        cout<<"1.Check Balance"<<endl;
        cout<<"2.Deposit Money"<<endl;
        cout<<"3.Withdraw Money"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Your current balance is: "<<balance<<endl;
            break;

            case 2:
            cout<<"Your amount to deposit: ";
            cin>>amount;
            if(amount>0){
                balance +=amount;
                cout<<"Amount deposited successfully."<<endl;
            }
            else{
                cout<<"Invalid amount!"<<endl;
            }
            break;

            case 3:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            if(amount>balance){
                cout<<"Insufficiant balance!"<<endl;
            }
            else if(amount<=0){
                cout<<"Invalid amount!"<<endl;
            }
            else{
                balance-=amount;
                cout<<"Please collect your cash."<<endl;
            }
            break;

            case 4:
            cout<<"Thank you for using ATM!"<<endl;
            break;

            default:
            cout<<"Invalid choice!Try again."<<endl;
        }
    }
    while(choice!=4);
}