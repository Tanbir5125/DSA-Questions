#include <bits/stdc++.h>

void findDivisors(int n){
    vector<int>ls;  //used vector to store the divisors
    for(int i=1;i*i<=n;i++){  // to reduce time complexity used i*i instead of sqrt(n)
        if(n % i == 0)  //to check if the i can divide the number completely
            ls.push_back(i);
        if(n/i != i)  // if i is a divisor then n / i is also a divisor
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
