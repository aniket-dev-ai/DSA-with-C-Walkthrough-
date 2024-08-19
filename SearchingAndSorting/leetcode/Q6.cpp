#include <iostream>
using namespace std;

int bsearch(int arr[], int n) {
    int s = 0,  e = n - 1 , m = s+(e-s)/2;
        if(arr[s]!=arr[s+1]){return arr[s];}
        if(arr[e]!=arr[e-1]){return arr[e];}

    while (s <= e) {
        if(s==e){
            return arr[s];
        }
        if(m-1>=0 && m+1<n && arr[m] != arr[m+1] && arr[m] != arr[m-1]){
            return arr[m];
        }

        if(arr[m] == arr[m-1]){
            if(m&1){
                s = m+1;
            }else{
                e = m-1;
            }
        }
        if(arr[m] == arr[m+1]){
            if(m&1){
                e = m-1;
            } else{
                s = m+1;
            }
        }
        m = s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[] = {1,2,2,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number found: " << bsearch(arr, n) << endl;
    return 0;
}
