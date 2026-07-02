#include<iostream>
#include<string>
using namespace std;

class Ticket{
    private:
    int ticketNo;
    string passengerName;
    string destination;
    int seats;

    public:
    void bookTicket(){
        cout<<"Enter Ticket Number:";
        cin>>ticketNo;
        cin.ignore();
        cout<<"Enter Passenger Name:";
        getline(cin,passengerName);
        cout<<"Enter Destination:";
        getline(cin,destination);
        cout<<"Enter Number of Seats:";
        cin>>seats;
        cout<<"\nTicket booked successfully!\n";
    }
    void displayTicket(){
        cout<<"\nTicket Number:"<<ticketNo;
        cout<<"\nPassenger Name:"<<passengerName;
        cout<<"\nDestination:"<<destination;
        cout<<"\nNumber of Seats:"<<seats<<endl;
    }
};
int main(){
    Ticket ticket;
    int choice;
    do{
        cout<<"\nTicket Booking System\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. Display Ticket\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                ticket.bookTicket();
                break;
            case 2:
                ticket.displayTicket();
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