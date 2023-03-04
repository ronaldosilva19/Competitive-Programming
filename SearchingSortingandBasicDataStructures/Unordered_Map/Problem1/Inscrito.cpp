//
// Created by ronal on 3/2/2023.
// Problem Link Description.
// https://br.spoj.com/problems/INSCRICO/

#include <bits/stdc++.h>

using namespace std;

void Inscricao(vector<string>& Ins){
    unordered_map<string, int> mp;

    for(auto str : Ins){
        mp[str]++;
    }

    for(auto value : Ins){
        if(mp[value] != - 1){
            cout << value << " " << mp[value] << "\n";
            mp[value] = - 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> Ins;
    string name, institution;
    int size;

    cin >> size;
    while(size != 0){
        for(int i = 0; i < size; i++){
            cin >> name >> institution;
            Ins.push_back(institution);
        }
        cin >> size;
    }
    Inscricao(Ins);
    return 0;
}