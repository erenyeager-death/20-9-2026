#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
ll z=0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>a(n);
    vector<pair<pll,ll>>p(n);

    for (int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
        p[i].first.first=max(a[i].first-k,z);
        p[i].first.second=a[i].second+k;
        p[i].second=a[i].second;
    }
    ll mx=0;
    vector<pll>e;
    for (int i=0;i<n;i++){
        e.push_back({p[i].first.first,p[i].second});
        e.push_back({p[i].first.second+1,-p[i].second});
    }
    sort(e.begin(),e.end());
    ll cur=0;
    for (auto &x:e){
        cur+=x.second;
        mx=max(mx,cur);
    }
    cout<<mx/2;

    return 0;
}
