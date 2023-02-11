//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/geek-and-his-marks-1611824182/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int tests, size, value, querys, key, count;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> value;
            v.push_back(value);
        }

        cin >> querys;
        for(int k = 0; k < querys; k++){
            cin >> key;
            count = 0;
            for(int p = 0; p < v.size(); p++){
                if(v[p] > key){
                    count++;
                }
            }
            cout << count << "\n";
        }
        v.clear();

    }
    return 0;
}