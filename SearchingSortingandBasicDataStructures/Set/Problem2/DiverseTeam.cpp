//
// Created by ronal on 4/23/2023.
// Problem link description.
// https://codeforces.com/contest/988/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    set<int> s;
    int n, k, value;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> value;
        if(s.find(value) != s.end()){
            continue;
        }else{
            s.insert(value);
            v.push_back(i + 1);
        }
        if(v.size() == k){
            break;
        }
    }

    if(v.size() == k){
        cout << "YES\n";
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }else{
        cout << "NO\n";
    }

    return 0;
}
