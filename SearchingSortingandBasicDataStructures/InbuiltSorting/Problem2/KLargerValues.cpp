//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/k-larger-values/0

#include <bits/stdc++.h>
using namespace std;

void PrintValuesMoreThanKey(vector<int> &v, int key){
    for(int i = 0; i < key; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    v.clear();
}
int main() {
    vector<int> v;
    int tests, size, key, value;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size >> key;
        for(int j = 0; j < size; j++){
            cin >> value;
            v.push_back(value);
        }

        sort(v.begin(), v.end(), greater<int>());
        PrintValuesMoreThanKey(v, key);
    }
    return 0;
}
