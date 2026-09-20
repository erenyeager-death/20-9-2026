#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s,s1;
    cin>>s>>s1;
    unordered_set<char>se;
    vector<char>ss;
    if (s.length()>=s1.length()){
        for (char it:s1){
            se.insert(it);
        }
        for (char x:s1){{
            if (se.find(x)!=se.end()){
                ss.push_back(x);
            }
         }
        }
    }
    else {
        for (char it:s1){
            se.insert(it);
        }
        for (char x:s){
            if (se.find(x)!=se.end())ss.push_back(x);
        }
    }
    sort(ss.begin(),ss.end());
    reverse(ss.begin(),ss.end());
    set<char>tmp;
    for (auto it:ss){
        if (tmp.find(it)==tmp.end())cout<<it;
        tmp.insert(it);
    }
    return 0;
}
