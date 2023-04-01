//
// Created by ronal on 4/2/2023.
// Problem link description.
// https://leetcode.com/problems/queries-on-a-permutation-with-key/description/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:


    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> output;
        vector<int> p;

        for(int i = 0; i < m; i++){
            p.push_back(i + 1);
        }

        for(int j = 0; j < queries.size(); j++){
            auto position = find(p.begin(), p.end(), queries[j]) - p.begin();
            output.push_back(position);
            int aux = p[position];
            p.erase(p.begin() + position);
            p.insert(p.begin(), aux);
        }

        return output;

    }
};
