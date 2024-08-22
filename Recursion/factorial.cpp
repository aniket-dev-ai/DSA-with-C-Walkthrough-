#include <iostream>
using namespace std;

int factorial(int i){
    if(i == 0)
        return 1;
    else
        return i * factorial(i - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;
    
    return 0;
} 