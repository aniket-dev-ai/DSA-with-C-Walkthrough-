#include <iostream>
#include <climits>

using namespace std;

void printeven(int arr[],int n ,int f){
    if(n==0) return;

    if(arr[f]%2==0)   cout<<arr[f]<<" ";

    printeven(arr,n-1,f+1);
}

int main(){
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 6};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int f = 0;
    printeven(arr,n,f);
    return 0;
}