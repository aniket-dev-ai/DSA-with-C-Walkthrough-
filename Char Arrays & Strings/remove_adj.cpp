#include <iostream>
using namespace std;

void remadj(string str ){
    string str2 = "";
    int i =0;
    while(i<str.length()){
        if(str[i]!=str2[str2.length()-1]){
            str2.push_back(str[i]);
        }else if(str[i]==str2.back()){
            str2.pop_back();
        }
        i++; 
    }
    cout<<str2<<endl;
}

int main(){
    string str = "azxxzy";
    remadj(str);
}