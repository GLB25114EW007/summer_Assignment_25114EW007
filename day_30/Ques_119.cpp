#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,choice,searchID;
    int empID[100];
    string name[100],department[100];
    float salary[100];

    cout<<"Enter number of employees: ";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        cout<<"Enter details of Employee "<<i+1<<endl;
        cout<<"Employee ID: ";
        cin>>empID[i];
        cin.ignore();
        cout<<"Name: ";
        getline(cin,name[i]);
        cout<<"Department: ";
        getline(cin,department[i]);
        cout<<"Salary: ";
        cin>>salary[i];
        cin.ignore();
    }
    do{
        cout<<"MINI EMPLOYEE MANAGEMENT SYSTEM"<<endl;
        cout<<"1. Display all employees"<<endl;
        cout<<"2. Search for an employee"<<endl;
        cout<<"3. Update salary"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"EMPLOYEE DETAILS"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"Employee ID: "<<empID[i]<<endl;
                    cout<<"Name: "<<name[i]<<endl;
                    cout<<"Department: "<<department[i]<<endl;
                    cout<<"Salary: "<<salary[i]<<endl;
                }
                break;

            case 2:
                cout<<"Enter Employee ID to search: ";
                cin>>searchID;
                for(int i=0;i<n;i++){
                    if(empID[i]==searchID){
                        cout<<"Employee found!"<<endl;
                        cout<<"Employee ID: "<<empID[i]<<endl;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Department: "<<department[i]<<endl;
                        cout<<"Salary: "<<salary[i]<<endl;
                        break;
                    }
                    if(i==n-1){
                        cout<<"Employee ID not found."<<endl;
                    }
                }
                break;

            case 3:
                cout<<"Enter Employee ID to update salary: ";
                cin>>searchID;
                for(int i=0;i<n;i++){
                    if(empID[i]==searchID){
                        cout<<"Employee found!"<<endl;
                        cout<<"Current Salary: "<<salary[i]<<endl;
                        cout<<"Enter new salary: ";
                        cin>>salary[i];
                        cout<<"Salary updated successfully."<<endl;
                        break;
                    }
                    if(i==n-1){
                        cout<<"Employee ID not found."<<endl;
                    }
                }
                break;

            case 4:
                cout<<"Exiting the program."<<endl;
                break;

            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }while(choice!=4);
    return 0;

}