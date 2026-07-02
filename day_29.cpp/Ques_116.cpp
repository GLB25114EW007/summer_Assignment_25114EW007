#include<iostream>
#include<string>
using namespace std;

class Inventory {
    private:
    int itemID;
    string itemName;
    int quantity;
    float price;

    public:
    void addItem(){
        cout << "Enter Item ID: ";
        cin >> itemID;
        cin.ignore(); // To ignore the newline character after reading itemID
        cout << "Enter Item Name: ";
        getline(cin, itemName);
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;

        cout<<"\nItem added successfully!\n";
    }
    void displayItem(){
        cout << "\nItem ID: " << itemID << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
    }

    void updateQuantity(){
        int newQuantity;
        cout << "Enter new quantity for Item ID " << itemID << ": ";
        cin >> newQuantity;
        quantity = newQuantity;
        cout<<"\nQuantity updated successfully!\n";
    }
};

int main() {
    Inventory item;
    int choice;

    do {
        cout << "\nMENU-DRIVEN INVENTORY MANAGEMENT\n";
        cout << "1. Add Item\n";
        cout << "2. Display Item\n";
        cout << "3. Update Quantity\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                item.addItem();
                break;
            case 2:
                item.displayItem();
                break;
            case 3:
                item.updateQuantity();
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}