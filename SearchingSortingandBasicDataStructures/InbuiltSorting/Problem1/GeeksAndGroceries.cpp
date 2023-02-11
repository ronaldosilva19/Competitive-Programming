//
// Created by ronal on 2/11/2023.
// Problem Description link.
// https://practice.geeksforgeeks.org/problems/geeks-and-groceries/0

#include <bits/stdc++.h>

using namespace std;

void PrintProducts(vector<pair<int, string>> &P, int qnt){
    vector<string> S;

    for(auto value : P){
        if(S.size() < qnt){
            S.push_back(value.second);
        }else{
            break;
        }
    }

    for(auto products : S){
        cout << products << " ";
    }
    cout << "\n";
}
int main() {
    vector<pair<int, string>> produtos;
    int tests, qnt_pro, choose_produ, price;
    string value;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> qnt_pro >> choose_produ;

        for(int j = 0; j < qnt_pro; j++){
            cin >> value >> price;
            produtos.emplace_back(price, value);
        }
        sort(produtos.begin(), produtos.end());
        PrintProducts(produtos, choose_produ);
        produtos.clear();
    }
    return 0;
}

