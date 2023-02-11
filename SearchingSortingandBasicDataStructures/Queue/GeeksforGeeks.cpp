//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/geeksforgeeks/0

#include <bits/stdc++.h>
using namespace std;

int GeeksForGeeks(queue<int> &q){
    int aux;

    if(q.size() == 1){
        return q.front();

    }else{
        while(!q.empty()){
            aux = q.front();
            q.pop();
            q.push(aux);
            q.pop();

            if(q.size() == 1){
                break;
            }
        }
    }
    return q.front();
}

int main() {
    queue<int> q;
    int tests;
    int size;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size;
        for(int j = 1; j <= size; j++){
            q.push(j);
        }
        cout << GeeksForGeeks(q) << "\n";
        q.pop();
    }
    return 0;
}
