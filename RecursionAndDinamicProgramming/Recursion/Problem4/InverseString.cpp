// Create by ronaldo 03/20/2023
// Problem link description.
// https://leetcode.com/problems/reverse-string/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0;
        int end = s.size() - 1;
        
       while(begin < end){
           swap(s[begin], s[end]);
           begin++;
           end--;
       }
        for(int i = 0; i < s.size(); i++){
            cout << s[i] << " ";
        }
        cout << "\n";
    }
};

int main(){
  Solution solution;
  vector<char> arr = {'R', 'O', 'N', 'A', 'L', 'D', 'O'};
  solution.reverseString(arr);
  return 0;
}
