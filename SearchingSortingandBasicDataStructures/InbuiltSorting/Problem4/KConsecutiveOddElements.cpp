//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/k-consecutive-odd-elements/0

#include <bits/stdc++.h>
using namespace std;

void PrintResult(vector<int> &v, int key){
    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 != 0){
            count++;
        }else{
            count = 0;
        }
        if(count == key){
            break;
        }else{
            continue;
        }
    }

    if(count == key){
        cout << "yes";
    }else{
        cout << "no";
    }
    cout << "\n";

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

        sort(v.begin(), v.end());
        PrintResult(v, key);
        v.clear();
    }
    return 0;
}

