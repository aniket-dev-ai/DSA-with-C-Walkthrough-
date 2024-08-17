#include <iostream>
using namespace std;

void sort(int arr[] , int n){
    for(int i =0; i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr [j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int binarysearch(int arr[] , int n , int s){
    int l = n;
    int f = 0;
    int m = (l+f)/2;

    while(f!=l){
        if(arr[m]==s){
            return arr[m];
        }
        if(arr[m]>s){
            l = m -1;
        }
        if(arr[m]<s){
            f=m+1;
        }
        m = (l+f)/2;
    }
    return -1;
}

int main(){
    int arr [] = {234,65,6,1234,75,54,67,234,6,234};
    int n =   sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    cout<<binarysearch(arr,n,5324)<<endl;
}
        