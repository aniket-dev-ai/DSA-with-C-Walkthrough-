#include <iostream>
using namespace std;

static int e = 1000;

void fib(int a, int b ) {
    int c = a+b;
    if(e < c) {
        return;
    }
    cout << c << " ";
    fib(b, c );
}

int main() {
    int a = 0, b = 1, c = a + b;
    cout << a << " " << b << " ";
    fib(a, b );
    return 0;
}
  