//
// Created by ronal on 4/23/2023.
// Link problem description.
// https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> aux;
        for(int i = 0; i < s.size(); i++){
            if((s[i] <= 47) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96) || (s[i] >= 123 && s[i] <= 126)){
                continue;
            }else{
                char c = toupper(s[i]);
                aux.push_back(c);
            }
        }
        int begin = 0;
        int end = aux.size() - 1;
        while(begin < end){
            if(aux[begin++] != aux[end--]){
                return false;
            }
        }

        return true;
    }
};
