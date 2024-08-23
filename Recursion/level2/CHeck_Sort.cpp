#include <iostream>
using namespace std;

bool sort(int arr[] , int n){
    if(n==1) return true;
    return (arr[n-1]>=arr[n-2] && sort(arr,n-1)) ;
}
int main(){
    int arr[] = {6, 0, 1, 2, 5};
    
    int arr1[] = {0, 0, 1, 2, 5};    

    
    int arr2[] = {0, 0, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(sort(arr,n)){
        cout << "Array is sorted in ascending order" << endl;
    }else{
        cout << "Array is not sorted in ascending order" << endl;
    }
    if(sort(arr1,n)){
        cout << "Array is sorted in ascending order" << endl;
    }else{
        cout << "Array is not sorted in ascending order" << endl;
    }
    if(sort(arr2,n)){
        cout << "Array is sorted in ascending order" << endl;
    }else{
        cout << "Array is not sorted in ascending order" << endl;
    }
    return 0;
}