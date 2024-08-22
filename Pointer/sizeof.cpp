#include <iostream>
using namespace std;

int main(){
    int a =5;               int* ptr = &a;
    char ch = 'a';          char* ptr2 = &ch;
    long l = 3234;          long* ptr3 = &l;

    cout<<sizeof(ptr)<<endl<<sizeof(ptr2)<<endl<<sizeof(ptr3)<<endl; 
}    