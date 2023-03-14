// create to ronaldo 03/14/2023
// Problem link description.
// https://br.spoj.com/problems/SOMA12/

#include <bits/stdc++.h>
 
using namespace std;
 
void SumaTwo(vector<int>& nums, int k){
    pair<int, int> sumtwo;
    int begin = 0;
    int end = nums.size() - 1;
 
    for(int i = 0; i < nums.size(); i++){
        if(nums[begin] + nums[end] == k){
            sumtwo.first = nums[begin];
            sumtwo.second = nums[end];
        }else if(nums[begin] + nums[end] > k){
            end--;
        }else{
            begin++;
        }
    }
    cout << sumtwo.first << " " << sumtwo.second << "\n";
}
 
int main() {
   vector<int> nums;
   int size, value, k;
 
   cin >> size;
   int i = 0;
    while (i < size){
        cin >> value;
        nums.push_back(value);
        i++;
    }
    cin >> k;
    SumaTwo(nums, k);
    return 0;
}
 
