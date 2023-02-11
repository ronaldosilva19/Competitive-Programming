//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/geek-and-books/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> Stak;
    int tests, size, value;
    string type;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> type;
            if(type.compare("place") == 0){
                cin >> value;
                Stak.push(value);
            }else{
                if(Stak.empty()){
                    cout << "-1 ";
                }else{
                    cout << Stak.top() << " ";
                    Stak.pop();
                }
            }
        }

        while(!Stak.empty()){
            Stak.pop();
        }
        cout << "\n";
    }
    return 0;
}
