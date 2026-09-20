#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    unordered_map<string,ll>mp;
    ll n;
    cin>>n;
    ll res=0;
    while (n--){
        string x;cin>>x;mp[x]++;
    }
    for (auto it:mp){
        if (it.second<=5)res+=100;
         else res+=100+(it.second-5);
    }
    cout<<res;
    return 0;
}

