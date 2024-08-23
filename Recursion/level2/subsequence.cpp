#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str , int i , string output,vector<string>& ans){
    if(i==str.length()){
        cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    printSubsequences(str, i+1, output+str[i],ans);
    printSubsequences(str, i+1,output,ans);
}

int main(){

    string str = "abc";
    string output = "";
    vector<string> ans ;

    printSubsequences(str,0,output,ans);

    for(auto i:ans){
        cout<<i<<" ";
    }
    
    cout<<ans.size();
}