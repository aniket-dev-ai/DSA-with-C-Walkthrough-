#include <iostream>
using namespace std;
static int y;
int search(int arr[],int n,int i){
    if(n==i){
        return -1;
    }else if(arr[i]==y){
        return i;
    }else{
         search(arr,n,i+1);
    }
}

int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr)/sizeof(arr[0]);
    y = 23;
    if(search(arr, n, 0)){
        cout << "Element found at index: " << search(arr, n, 0);
    } else {
        cout << "Element not found";
    }
    return 0;
}