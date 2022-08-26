// Name : Jitesh Chawla 
// Roll No: 2010991585
// Set : 5
// Q1: Given an integer array,find the maximum length subarray having a given sum

#include <bits/stdc++.h>
#define ll              long long int
#define nline           '\n' 
using namespace std;

int main (){

    ll n,target;cin >> n >> target;
    vector<ll>v(n);
    for(int i = 0;i < n;i ++){
        cin >> v[i];
    }
    ll sum  = 0;
    ll maxLen  = 0;
    ll i = 0,j= 0 ;
    while (j < n) {
        sum += v[j];
        if (sum < target) {
            j++;
        }
        else if (sum == target) {
            maxLen = max(maxLen, j-i+1);
            j++;
        }
        else if (sum > target) {
            while (sum > target) {
                sum -= v[i];
                i++;
            }
            if(sum == target){
                maxLen = max(maxLen, j-i+1);
            }
            j++;
        }
    }
    cout << "The Longest Subarray is ";
    cout << "{ ";
    for(auto i : v){
        cout << i << ' ';
    }
    cout << "} having length ";

    cout << maxLen << nline;

    return 0;
}