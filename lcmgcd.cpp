#include <bits/stdc++.h>

vector<long long>lcmAndGcd(long long A,long long B){
    long long gcd,lcm;
    long long tempA = A,tempB = B;

    while(tempA > 0 && tempB > 0){
        if(tempA > tempB) tempA %= tempB;
        else tempB %= tempA;
    }
    if(tempB == 0) gcd = tempA;
    else gcd = tempB;

    lcm = (A/gcd) * B;

    return {lcm,gcd};
}

int32_t main(){
    long long a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    vector<long long>result = lcmAndGcd(a,b);
    cout<<"LCM: "<<result[0]<<endl;
    cout<<"GCD: "<<result[1]<<endl;
    return 0;
}