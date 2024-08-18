// find pivot index after rotating the Array

#include <iostream>
#include <vector>
using namespace std;

int getpivotindex(vector<int>& arr){
    int s = 0;
    int n = arr.size();
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(mid+1<n && arr[mid]>arr[mid+1]){
            return mid;
        }
        if(mid-1 >= s && arr[mid]<arr[mid-1]){
            return mid -1 ;
        }
        if(arr[s]>arr[mid]){
             e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1; // In case no pivot is found
}

int binarysearch(int s , int l ,vector<int>& arr , int t){
    while(s<=l){
        int mid = s +(l-s)/2;
        if(arr[mid]==t){
            return mid;
        }
        if(arr[mid]>t){
            l = mid -1;
        } else {
            s = mid+1;
        }
    }
    return -1;
}

int search(vector<int>& arr , int t){
    int pv = getpivotindex(arr);
    int n = arr.size();
    if (pv == -1) { // Array is not rotated
        return binarysearch(0, n-1, arr, t);
    }
    if(arr[pv] == t) {
        return pv;
    }
    if(t >= arr[0] && t <= arr[pv]){
        return binarysearch(0, pv, arr, t);
    }
    return binarysearch(pv+1, n-1, arr, t);
}
int main(){
    vector<int> arr = {5,6,7,8,1,2,3,4};
    cout<<getpivotindex(arr)<<endl;
    cout<<search(arr,2)<<endl;

}

