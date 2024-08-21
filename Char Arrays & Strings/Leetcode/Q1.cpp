#include<iostream>
using namespace std;
 bool check(string s){
        int i = 0 , j = s.length()-1;
        if(i==j){
            return true;
        }
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
       int n = s.length()-1;
       int c = n;
       for(int i =0;i<n;i++){
        for(int j = i;j<n;j++){
            if(s.substr(i,j).length()==1){
                continue;
            }
            cout<<s.substr(i,j)<<endl;
            if(check(s.substr(i,j))){
                c++;
            }
        }
       }
        return c;
    }
    int main(){
        cout<<endl<<countSubstrings("hello")<<endl;

    }