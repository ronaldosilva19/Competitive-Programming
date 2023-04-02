//
// Created by ronal on 4/23/2023.
// Problem link description.
// https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int v = 1;
    string nome, aux;
    map<string, int> mp;
    cin >> n;

    while(n--){
        cin >> nome;
        map<string, int>::iterator ele = mp.find(nome);
        if(ele != mp.end()){
            aux = nome;
            nome += to_string(mp[nome]);
            mp[aux]++;
            cout << nome << "\n";
        }else{
            mp.insert({nome, v});
            cout << "OK\n";
        }
    }
    return 0;
}
