 #include <iostream>
 using namespace  std;

 int search(int arr[] , int s, int e , int f){
    if (s>e)  return -1;

    int m = s+(e-s)/2;

    if(arr[m]==f)   return m;

    if(arr[m]<f){
        search(arr,m+1,e,f);
    }else if(arr[m]>f){
        search(arr,s,m-1,f);
    }
 }

 int main(){
    int arr[] = {2, 3, 4, 10, 40, 50, 60, 70, 80 , 100 , 200 , 300 , 400 ,  500 , 600 , 700 , 800 , 900 , 1000 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4100;  
    int result = search(arr, 0, n-1, x);
    (result==-1)? cout<<"Element is not present in array"
                 : cout<<"Element is present at index " << result;
    return 0;
 }
 
