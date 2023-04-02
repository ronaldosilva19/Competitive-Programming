//
// Created by ronal on 4/23/2023.
// Problem link description.
// https://codeforces.com/contest/1512/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 0; i < n; i++){
            if(v[i] != v[((i - 1) + n ) % n] && v[i] != v[(i + 1) % n]){
                cout << i + 1 << "\n";
            }
        }

    }

    return 0;
}
