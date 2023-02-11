//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/valid-string/0

#include <bits/stdc++.h>
using namespace std;

string isValid(string s){
    stack<char> stak;
    char c;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            stak.push(s[i]);
            continue;
        }else if(stak.empty()){
            return "no\n";
        }else if(s[i] == '1'){
            stak.pop();
        }
    }

    if(stak.empty()){
        return "yes\n";
    }else{
        return "no\n";
    }

}

int main() {
    int tests, size;
    string s;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size;
        cin.ignore();
        getline(cin, s);
        cout << isValid(s);
    }
    return 0;
}
