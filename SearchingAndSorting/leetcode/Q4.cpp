// divisor and dividend is given find quotient without using ("/" or"%")

#include <iostream>
using namespace std;
int quotient(int n , int d){
    int s = 0;
    int l = n;
    int mid = s + ((l-s)>>1);
    int ans = -1;
    while(s<=l){
        if((d*mid) == n){
            return mid;
        }
    
        if((d*mid) < n){
            ans = mid;
            s = mid +1 ;
        }
        else{
            l = mid -1;
        }
        mid = s + ((l-s)>>1);
    }
    return ans;
}

int main() {
    cout<<"Please enter numerator and denominator\nWe will find quotient using binary search "<<endl;
    int n,d;
    cin>>n>>d;
    cout<<"\nNumerator = "<<n<<"   Denominator = "<<d<<endl<<"\nThe Quotient is "<<quotient(abs(n),abs(d))<<endl<<endl;
    return 0;
}

