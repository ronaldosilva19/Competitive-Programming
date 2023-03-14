//
// Created by ronaldo on 14/03/23.
// Problem link description.
// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> Inset;
        unordered_set<int> duplicate;

        for(auto value : nums){
            if(Inset.find(value) == Inset.end()){
                Inset.insert(value);
            }else{
                duplicate.insert(value);
            }
        }

        auto single = duplicate.begin();

        return *single;
    }
};
