// Name : Jitesh Chawla 
// Roll No: 2010991585
// Set : 5
// Q2: Given an integer array, print all subarray with zero sum

#include <bits/stdc++.h>
#define ll              long long int
#define nline           '\n' 
using namespace std;

int main (){

    ll n;cin >> n;
    vector<ll>v(n);
    for(int i = 0;i < n;i ++){
        cin >> v[i];
    }
    map<ll,vector<ll>>mp;
    vector<pair<ll,ll>> ranges;
    ll sum = 0;
    for(ll i = 0;i < n;i ++){
        sum += v[i];
        if(sum == 0){
            ranges.push_back({0,i});
        }
        if(mp.find(sum) != mp.end()){
            vector<ll> temp = mp[sum];
            for(auto j : temp){
                ranges.push_back({j + 1,i});
            }
        }
        mp[sum].push_back(i);
    } 

    for(auto i : ranges){
        ll l = i.first,r = j.second;
        cout << "{ ";
        for(int j = l;j <= r;j ++){
            cout << v[j] << ' ';
        }
        cout << "}";
        cout << nline;
    }

    return 0;
}