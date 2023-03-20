//
// Created by ronaldo on 20/03/23.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/kth-smallest-factor2345/1

#include <iostream>

using namespace std;
class Solution {
public:
    int kThSmallestFactor(int N , int K) {
        vector<int> divisors;

        for(int i = 1; i <= sqrt(N); i++){
            if(N % i == 0){
                if(N / i == i){
                    divisors.push_back(i);
                }else{
                    divisors.push_back(i);
                    divisors.push_back(N / i);
                }
            }
        }

        sort(divisors.begin(), divisors.end());

        if(divisors.size() >= K){
            return divisors[K - 1];
        }
        return -1;
    }
};

int main(){
    Solution solution;
    solution.kThSmallestFactor(1000, 100);
    return 0;
}