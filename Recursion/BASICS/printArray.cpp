#include <iostream>
using namespace std;

void printarray(int arr[],int size,int index){
    if(size==index){
        return;
    }
    cout<<arr[index]<<" ";
    printarray(arr,size ,index+1);
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printarray(arr, size, 0);
    return 0;
}
