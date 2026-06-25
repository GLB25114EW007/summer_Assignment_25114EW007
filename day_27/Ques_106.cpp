#include<iostream>
using namespace std;
 struct Employee{
    int id;
    string name;
    int age;
    float salary;
 };
 int main(){
    Employee emp[100];
    int count=0;
    int choice;

    do{
        cout<<"\n===== Employee Management System ====="<<endl;
        cout<<"1.Add Employee"<<endl;
        cout<<"2.Display All Employees"<<endl;
        cout<<"3.Search Employee by ID"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"\nEnter Employee ID: ";
            cin>>emp[count].id;
            cout<<"Enter Name: ";
            cin>>emp[count].name;
            cout<<"Enter Age: ";
            cin>>emp[count].age;
            cout<<"Enter Salary: ";
            cin>>emp[count].salary;
            count++;
            cout<<"Employee added successfully!"<<endl;
            break;

            case 2:
            cout<<"\n--- Employee Records ---"<<endl;
            for(int i=0;i<count;i++){
                cout<<"ID: "<<emp[i].id
                <<",Name: "<<emp[i].name
                <<",Age: "<<emp[i].age
                <<",Salary: "<<emp[i].salary<<endl;
            }
            break;

            case 3:{
                int searchId;
                cout<<"Enter Employee ID to search: ";
                cin>>searchId;
                bool found=false;

                for(int i=0;i<count;i++){
                    if(emp[i].id==searchId){
                        cout<<"Record Found: "
                        <<"Name: "<<emp[i].name
                        <<",Age: "<<emp[i].age
                        <<",Salary: "<<emp[i].salary<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    cout<<"Employee not found!"<<endl;
                }
                break;
            }

            case 4:
            cout<<"Exiting program..."<<endl;
            break;

            default:
            cout<<"Invalid choice!"<<endl;
        }
    }
    while(choice!=4);
 }
