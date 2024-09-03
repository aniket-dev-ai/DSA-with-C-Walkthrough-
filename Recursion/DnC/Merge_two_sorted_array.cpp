#include <iostream>
#include <vector>
using namespace std;

void addd(int arr[],int brr[],int n,int m,vector<int>& ans){
int i = 0;
int j = 0;

while (i < n ||  j < m){
    if (arr[i] < brr[j]) ans.push_back(arr[i++]);
    else ans.push_back(brr[j++]);
    }

}

int main(){
    int arr[] = {10,30,50,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {20,40,60,90,100};
    int m = sizeof(brr)/sizeof(brr[0]); 
    vector<int> ans;
    addd(arr, brr, n, m, ans);
    cout<<"merged Array"<<endl;
    for(int c:ans){
        cout<<c<<" ";
    }
    return 0;
    }
    