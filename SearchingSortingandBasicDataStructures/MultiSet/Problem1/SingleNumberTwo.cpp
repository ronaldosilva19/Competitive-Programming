//
// Created by ronaldo on 12/03/23.
// Problem Link description.
// https://leetcode.com/problems/single-number-ii/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        multiset<int> single(nums.begin(), nums.end());
        vector<int> duplicates;
        unordered_set<int> inSet;
        unordered_set<int> duplicatesSet;

        for(auto value : nums){
            if(inSet.find(value) == inSet.end()){
                inSet.insert(value);
            }else{
                duplicatesSet.insert(value);
            }
        }

        for(auto dupli : duplicatesSet){
            duplicates.push_back(dupli);
        }

        for(int i = 0; i < duplicates.size(); i++){
            single.erase(duplicates[i]);
            continue;
        }

        auto it = single.begin();
        return *it;
    }
};
