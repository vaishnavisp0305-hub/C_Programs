#include<iostream>
using namespace std;
namespace vaishnavi
{int sum();int sub();int mult();int div();}
int main() {
    int choice;
    char i;
    do {
        cout << "1. Sum\n";
        cout << "2. Difference\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout<<vaishnavi::sum();
                break;
            case 2:
                cout<<vaishnavi::sub();
                break;
            case 3:
                cout<<vaishnavi::mult();
                break;
            case 4:
                cout<<vaishnavi::div();
                break;
            default:
                cout<<"Invalid choice!"<<endl;
        }
        cout<<"\nDo you want to perform another operation? (y/n): ";
        cin>>i;
    } while (i=='y'||i=='Y');
    return 0;
}