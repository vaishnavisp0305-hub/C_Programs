#include<iostream>
using namespace std;
namespace vaishnavi 
{ int sum();int sub();int mult();int div();}
int main() {
    int choice;
       cout<<"1. Sum\n";
       cout<<"2. Subtraction\n";
       cout<<"3. Multiplication\n";
       cout<<"4. Division\n";
       cout<<"Enter your choice (1-4) : \n";
       cin>>choice;
       switch (choice) {
          case 1:
            cout<<vaishnavi::sum()<<endl;
            break;
          case 2:
            cout<<vaishnavi::sub()<<endl;
            break;
          case 3:
            cout<<vaishnavi::mult()<<endl;
            break;
          case 4:
            cout<<vaishnavi::div()<<endl;
            break;
    }
    return 0;
}