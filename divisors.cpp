#include <bits/stdc++.h>

void findDivisors(int n){
    vector<int>ls;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0)
            ls.push_back(i);
        if(n/i != i)
            ls.push_back(n/i);
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls)
        cout<<it<<" ";
    cout<<endl;
}


int main() {
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    findDivisors(n);
    return 0;
}
