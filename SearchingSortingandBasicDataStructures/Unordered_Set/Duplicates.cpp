//
// Created by ronal on 2/26/2023.
// Problem Link Description
// https://leetcode.com/problems/find-all-duplicates-in-an-array/

#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
   vector<int> findDuplicates(vector<int>& nums) {
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

        for(auto value : duplicatesSet){
            duplicates.push_back(value);
        }
        return duplicates;
    }
};


int main(){
    Solution solution;
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = solution.findDuplicates(arr);
    for(auto value : duplicates){
        cout << value << " ";
    }
    cout << "\n";
    return 0;
}