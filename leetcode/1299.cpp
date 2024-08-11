//Replace Elements with Greatest Element on Right Side

#include <bits/stdc++.h>

int main() {
    vector<int> arr = {17,18,5,4,6,1};
    int n = arr.size();
    
    int maxRight = arr[n-1];
    arr[n-1] = -1;
    
    for(int i = n-2;i>=0;i--){
        int current = arr[i];
        arr[i] = maxRight;
        maxRight = max(maxRight,current);
    }
    
    for(auto it : arr){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}