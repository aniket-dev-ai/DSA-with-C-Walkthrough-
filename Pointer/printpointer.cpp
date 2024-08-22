#include <iostream>
using namespace std; 

    int main() {
        int a =5;
        int* ptr = &a;
        cout<<ptr<<endl;
        cout<<&ptr<<endl;
        cout<<*ptr<<endl;
        cout<<&a<<endl;
        // cout<<*a<<endl;
        cout<<ptr+1<<endl;
        cout<<*ptr/2<<endl;
        cout<<*ptr+1<<endl;
        
    }