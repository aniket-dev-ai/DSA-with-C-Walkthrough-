#include <iostream>
#include <climits>

using namespace std;

static int maxq = INT_MIN;
int maxi(int arr[],int n ){
    
    if(n==0) return maxq;

    maxq=max(maxq,arr[n-1]);

    maxi(arr,n-1);
}

int main(){
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum element is: " << maxi(arr, n);
    return 0;
}