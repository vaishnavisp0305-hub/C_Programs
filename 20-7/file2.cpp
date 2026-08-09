#include<iostream>
using namespace std;
namespace syc { 
  int show() {
    cout<<"Welcome syc"<<endl;
    cout<<"Perform C++ practiacl"<<endl;
    return 0;
  }
}
int main() {
    syc::show();
    return 0;
}