//
// Created by ronal on 2/25/2023.
// Problem Description Link.
// https://www.hackerrank.com/challenges/cpp-sets/problem

#include <bits/stdc++.h>
using namespace std;


int main() {
    int Q, y, x;
    set<int> S;
    cin >> Q;
    for(int i = 0; i < Q; i++){
        cin >> y >> x;
        if(y == 1){
            S.insert(x);
        }else if(y == 2){
            S.erase(x);
        }else if(y == 3){
            auto it = S.find(x);
            if(it != S.end()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
    return 0;
}



