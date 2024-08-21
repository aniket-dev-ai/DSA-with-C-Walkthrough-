#include <iostream>
using namespace std;
int checkprime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= (n/2)+1; i++) {
        if (n % i == 0){ 
            return false;
        }
    }
    return true;
}
int countPrimes(int n) {
    int c =0;
    for (int i = 2; i < n; i++) {
        if (checkprime(i)) {
            c++;
        }
    }
    return c;
}

int main(){
    int n = 499979;
    cout << "The number of prime numbers less than " << n << " is: " << countPrimes(n) << endl;
    return 0;
}