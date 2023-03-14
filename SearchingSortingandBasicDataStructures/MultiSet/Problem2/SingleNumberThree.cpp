//
// Created by ronaldo on 13/03/23.
// Problem Link description.
// https://leetcode.com/problems/single-number-iii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        multiset<int> two_ele(nums.begin(), nums.end());
        unordered_set<int> Inset;
        set<int> dupli;
        vector<int> output;

        for(auto value : nums){
            if(Inset.find(value) == Inset.end()){
                Inset.insert(value);
            }else{
                dupli.insert(value);
            }
        }

        for(auto it : dupli){
            two_ele.erase(it);
        }

        auto first = two_ele.begin();
        output.push_back(*first);
        first++;
        output.push_back(*first);

        return output;
    }
};
