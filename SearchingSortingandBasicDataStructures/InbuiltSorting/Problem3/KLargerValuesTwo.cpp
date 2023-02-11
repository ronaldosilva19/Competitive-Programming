//
// Created by ronal on 2/11/2023.
// Problem Decription Link.
// https://practice.geeksforgeeks.org/problems/k-larger-values-1611827113/0

#include <bits/stdc++.h>

using namespace std;

void PrintSet(set<int, greater<>> &S, int key){
    vector<int> v;
    for(auto value : S){
        v.push_back(value);
    }

    if(v.size() < key){
        cout << "-1";
    }else{
        for(int i = 0; i < key; i++){
            cout << v[i] << " ";
        }
    }
    cout << "\n";
}
int main() {
    set<int, greater<>> S;
    int tests, size, key, value;
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size >> key;
        for(int j = 0; j < size; j++){
            cin >> value;
            S.insert(value);
        }
        PrintSet(S, key);
        S.clear();
    }
    return 0;
}
