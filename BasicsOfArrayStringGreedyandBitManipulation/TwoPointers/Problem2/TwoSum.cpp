//
// Created by ronaldo on 12/03/23.
// Problem link description.
// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /* Method 1 : Complexity O(n2). Not efficient, even passing the tests.
        vector<int> aux;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    aux.push_back(i);
                    aux.push_back(j);
                }
            }
        }
        return aux;
      */

    // ---------------------------------------------------------------------------

       /* Method 2 : Two Pointers.  Complexity O(n). Efficient. */

        vector<int> aux(nums.begin(), nums.end());
        vector<int>::iterator it, it2;
        vector<int> output;
        sort(nums.begin(), nums.end());

        int begin = 0;
        int end = nums.size() - 1;
        int first, second;
        while(begin < end){
            if(nums[begin] + nums[end] == target){
                first = nums[begin];
                second = nums[end];
                break;
            }else if(nums[begin] + nums[end] > target){
                end--;
            }else{
                begin++;
            }
        }


        if(first == second){
            it = find(aux.begin(), aux.end(), first);
            it2 = find(aux.begin() + (it - aux.begin()) + 1, aux.end(), second);
            output.push_back(it - aux.begin());
            output.push_back(it2 - aux.begin());
        }else{
            it = find(aux.begin(), aux.end(), first);
            it2 = find(aux.begin(), aux.end(), second);
            output.push_back(it - aux.begin());
            output.push_back(it2 - aux.begin());
        }
        return output;
    }
};
