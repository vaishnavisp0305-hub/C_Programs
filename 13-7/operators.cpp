#include<iostream>
using namespace std;
int main() {
    int x,y,choice;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"\n---Calculator Menu---\n";
    cout<<"1. Sum\n";
    cout<<"2. Difference\n";
    cout<<"3. Division\n";
    cout<<"4. Multiplication\n";
    cout<<"5. Modulus\n";
    cout<<"Enter your choice (1-5): ";
    cin>>choice;
    switch (choice) {
        case 1:
          cout<<"Sum: "<<(x+y)<<endl;
          break;
        case 2:
          cout<<"Difference: "<<(x-y)<<endl;
          break;
        case 3:
          if(y == 0) {
              cout<<"Zero Division is not allowed."<<endl;
          } else {
              cout<<"Division: "<<(x/y)<<endl;
          }
        case 4:
          cout<<"Multiplication: "<<(x*y)<<endl;
          break;
        case 5:
          if(y == 0) {
              cout<<"Zero Division is not allowed."<<endl;
          } else {
              cout<<"Modulus: "<<(x%y)<<endl;
          }
return 0;
    }
}