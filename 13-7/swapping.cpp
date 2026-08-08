#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter first variable : ";
    cin>>a;
    cout<<"Enter second variable : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a is : "<<a<<endl;
    cout<<"b is : "<<b<<endl;
    return 0;
}