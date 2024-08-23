#include <iostream>
using namespace std;
static int c;
void count(int n){
    if(n==0){
         return;
    }
    cout<<c-n<<endl;
    count(n-1);
}

int main() {
    c=21;
    count(20);
}