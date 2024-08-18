// finding square root using binary search

#include <iostream>
#include <vector>

using namespace std;

void input(vector<int>& arr,int n){
    for(int i = 0; i < n;i++){
        arr.push_back(i);
    }
}

int binarysearchroot(vector<int>& arr , int t){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s+(e-s)/2;

    while(s<=e){
        int p = arr[mid]*arr[mid];
        if(p == t){
            return arr[mid];
        }
        if(p<t){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr;
    cout<<arr.max_size()<<endl;
    int t;
    cin>>t;
    input(arr,t);
    cout<<binarysearchroot(arr,t)<<endl;
}