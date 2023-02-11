//
// Created by ronal on 2/11/2023.
// Problem description Link.
// https://practice.geeksforgeeks.org/problems/contest-score/0


#include <bits/stdc++.h>
using namespace std;

void ContestScore(vector<long long> &v, stack<long long> &stak){
    vector<long long >::reverse_iterator rit;
    long long aux;
    bool value;
    for(rit = v.rbegin(); rit != v.rend(); rit++){
        stak.push(*rit);
    }

    int j = 0;
    while(!stak.empty()){
        aux = stak.top();
        stak.pop();
        value = false;
        for(int i = j; i < v.size(); i++){
            if(aux > v[i]){
                cout << i + 1 << " ";
                value = true;
                break;
            }else{
                continue;
            }
        }
        j++;
        if(!value){
            cout << "-1 ";
        }
    }

}

int main() {
    int tests, size;
    vector<long long> v;
    stack<long long> stak;
    long long value;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> value;
            v.push_back(value);
        }
        ContestScore(v, stak);
        cout << "\n";
        v.clear();

    }
    return 0;
}