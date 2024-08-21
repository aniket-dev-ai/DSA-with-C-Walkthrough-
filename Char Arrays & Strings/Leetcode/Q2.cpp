#include <iostream>
using namespace std;

bool search(string s, char c) {
    for (char ch : s) {
        if (ch == c) {
            return false;
        }
    }
    return true;
}

string add(string s) {
    string str;
    for (char c : s) {
        if (c != ' ' && search(str, c)) {
            str.push_back(c);
        }
    }
    return str;
}

string decodeMessage(string key, string message) {
    string str = add(key);
    string ans;

    for (char c : message) {
        if (c == ' ') {
            ans.push_back(' ');
        } else {
            int index = str.find(c);
            ans.push_back('a' + index);
        }
    }

    return ans;
}

int main(){
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    cout << "Decoded Message: " << decodeMessage(key, message) << endl;
    return 0;
}