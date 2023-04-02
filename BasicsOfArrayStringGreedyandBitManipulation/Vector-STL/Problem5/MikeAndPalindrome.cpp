//
// Created by ronal on 4/23/2023.
// Problem link description.
// https://codeforces.com/contest/798/problem/A

#include <bits/stdc++.h>

using namespace std;

bool IsPaliMike(string s){
    int count = 0;
    int begin = 0;
    int end = s.size() - 1;

    while(begin < end){
        if(s[begin++] != s[end--]){
            count++;
        }
    }

    if((count == 1) || (count == 0 && s.size() % 2 != 0)){
        return true;
    }else{
        return false;
    }
}

int main()
{
    // deque<char> dc;
    string s;
    cin >> s;

    if(IsPaliMike(s)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}
