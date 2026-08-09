#include<iostream>
using namespace std;
namespace vaishnavi {
    int sum()
     {
        int a,b,add;
        cout<<"Enter first number : ";
        cin>>a;
        cout<<"Enter second number : ";
        cin>>b;
        add=a+b;
        return add;
    }

    int sub() 
    {
        int x,y,sub;
        cout<<"Enter first number : ";
        cin>>x;
        cout<<"Enter second number : ";
        cin>>y;
        sub=x-y;
        return sub;
    }
}
