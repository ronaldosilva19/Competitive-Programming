//
// Created by ronaldo on 14/03/23.
// Problem link description.
// https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> single;

        for(auto value : nums){
            if(single.find(value) == single.end()){
                single.insert(value);
            }else{
                single.erase(value);
            }
        }

        auto one = single.begin();

        return *one;
    }
};
