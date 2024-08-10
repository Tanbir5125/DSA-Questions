#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;

    //pre-compute
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }

    for(auto it: mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<mp[c]<<endl;
    }
    return 0;
}