// Number of Senior Citizens
#include <bits/stdc++.h>

int main() {
    vector<string>detail ={"7868190130M7522","5303914400F9211","9273338290F4010"};
    int count = 0;
    for(auto i : detail)
        if(stoi(i.substr(11,2))>60)
            count++;
            
    cout<<count<<endl;
    return 0;
}