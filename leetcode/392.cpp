// Is Subsequence

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abc";
    string t = "ahbgdc";
    int j = 0;
    for(int i =0;i<t.length() && j < s.length();i++){
        if(t[i] == s[j])
            j++;
    }
    if(j == s.length())
        cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}