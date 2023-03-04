//
// Created by ronal on 3/4/2023.
// Problem Link Description
// https://practice.geeksforgeeks.org/problems/kth-frequency-1611823641/0

#include <bits/stdc++.h>
using namespace std;

void FrequencieIncreasingOrder(vector<int>& v, int k){
    unordered_map<int, int> mp;
    set<int> s;

    for(int i = 0; i < v.size(); i++){
        mp[v[i]]++;
    }

    for(auto value : mp){
        if(value.second > k){
            s.insert(value.first);
        }else{
            continue;
        }
    }

    if(s.size() == 0){
        cout << "-1\n";
    }else{
        for(auto value : s){
            cout << value << " ";
        }
        cout << "\n";
    }
}


int main() {
    int t, n, k, value;
    vector<int> v;

    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        for(int j = 0; j < n; j++){
            cin >> value;
            v.push_back(value);
        }
        FrequencieIncreasingOrder(v, k);
        v.clear();
    }
    return 0;
}
