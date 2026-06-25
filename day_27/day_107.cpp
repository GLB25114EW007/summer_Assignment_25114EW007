#include<iostream>
using namespace std;
 struct Employee{
    int id;
    string name;
    float basicSalary,hra,da,grossSalary;
 };
 int main(){
    Employee emp[100];
    int count=0;
    int choice;

    do{
        cout<<"\n===== Salary Management System ====="<<endl;
        cout<<"1.Add Employee Salary Details"<<endl;
        cout<<"2.Display All Records"<<endl;
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
            cout<<"Enter Basic Salary: ";
            cin>>emp[count].basicSalary;
            
            //Calculate allowances
            emp[count].hra=0.20*
            emp[count].basicSalary;
            emp[count].da=0.10*emp[count].basicSalary;

            emp[count].grossSalary=emp[count].basicSalary + emp[count].hra + emp[count].da;
            cout<<"Salary details added successfully!"<<endl;
            count++;
            break;

            case 2:
            cout<<"\n--- Employee Salary Records ---"<<endl;
            for(int i=0;i<count;i++){
                cout<<"ID: "<<emp[i].id
                <<",Name: "<<emp[i].name
                <<",Baic: "<<emp[i].basicSalary
                <<",HRA: "<<emp[i].hra
                <<",DA: "<<emp[i].da
                <<",Gross: "<<emp[i].grossSalary<<endl;
            }
            break;

            case 3:{
                int searchId;
                cout<<"Enter Employee ID to search: ";
                cin>>searchId;
                bool found=false;

                for(int i=0;i<count;i++){
                    if(emp[i].id==searchId){
                        cout<<"\nRecord Found:\n";
                        cout<<"Name: "<<emp[i].name<<endl;
                        cout<<"Basic Salary: "<<emp[i].basicSalary<<endl;
                        cout<<"HRA:"<<emp[i].hra<<endl;
                        cout<<"DA:"<<emp[i].da<<endl;
                        cout<<"Gross Salary: "<<emp[i].grossSalary<<endl;
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