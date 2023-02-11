//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/geek-and-his-marks-1611824243/0

#include <iostream>
#include <vector>
using namespace std;

int ValuesMorethanInput(vector<int> &v, int x){
    int count = 0;
    for(auto &value : v){
        if(value > x){
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> v;
    int n, x, tests, value;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> n >> x;
        for(int j = 0; j < n; j++){
            cin >> value;
            v.push_back(value);
        }
        cout << ValuesMorethanInput(v, x) << "\n";
        v.clear();
    }
    return 0;
}