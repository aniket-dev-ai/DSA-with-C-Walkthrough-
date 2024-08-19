//  find the target in nearly sorted array

 #include <iostream>
 using namespace std;

bool binsear(int arr[] , int n , int t){
    int s = 0; 
    int e = n - 1;
    int mid = s+ (e-s)/2;

    while(s<=e){
        if(arr[mid] == t){
            return true;
        }
        if(arr[mid+1] == t){
            return true;
        }
        if(arr[mid-1] == t){
            return true;
        }
        if(arr[mid]<t){
            s = mid +2;
        }
        else{
            e = mid -2;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 18;
    if(binsear(arr, n, target)){
    cout << "found" << endl;
    }else{
        cout<<"not found";
    }
    return 0;
}
 