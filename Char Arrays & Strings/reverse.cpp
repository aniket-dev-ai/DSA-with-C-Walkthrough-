#include <iostream>
using namespace std;

int getlength(char arr[] , int n){
    int i = 1;
    while(i<n){
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    return i;
}
void reverse(char arr[] , int n){
    int i =0;
    while(i<=n){
        char temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        i++;
    }
}

int main(){
    char arr[1000];
    cout << "Enter a string: ";
    cin.getline(arr, 1000);
    int n = getlength(arr, 1000);
    reverse(arr, n);
    cout << "Reversed string: " << arr << endl;
}