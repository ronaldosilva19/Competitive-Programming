//
// Created by ronaldo on 12/03/23.
// Problem link description.
// https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        /*Method 1 : Not efficient. Time Limit Exceeded. Complexity O(n3).
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++){
            if(i != 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for(int j = i + 1; j < nums.size() - 1; j++){
                if(j != i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                for(int k = j + 1; k < nums.size(); k++){
                    if(k != j + 1 && nums[k] == nums[k - 1]){
                        continue;
                    }
                    if(nums[i] + nums[j] + nums[k] == 0){
                        output.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return output;
         */

        /* Method 2 : Two Pointers. Efficient. Complexity O(n2). */

         int begin;
         int end;

        for(int i = 0; i < nums.size() - 2; i++){
            if(i != 0 && nums[i] == nums[i - 1]){
                continue;
            }

            begin = i + 1;
            end = nums.size() - 1;

            while(begin < end){
                if(nums[i] + nums[begin] + nums[end] == 0){
                    output.push_back({nums[i], nums[begin], nums[end]});
                    begin++;
                    while(begin < end && nums[begin] == nums[begin - 1]){
                        begin++;
                    }
                }else if(nums[i] + nums[begin] + nums[end] < 0){
                    begin++;
                }else{
                    end--;
                }
            }
        }
        return output;
    }
};
