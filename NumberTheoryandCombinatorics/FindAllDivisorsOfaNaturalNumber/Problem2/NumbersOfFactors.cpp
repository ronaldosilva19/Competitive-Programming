//
// Created by ronaldo on 21/03/23.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/number-of-factors1435/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include <iostream>

using namespace std;

class Solution{
public:
    int countFactors(int N){
        int count = 0;

        for(int i = 1; i <= sqrt(N); i++){
            if(N % i == 0){
                if(N / i == i){
                    count++;
                }else{
                    count += 2;
                }
            }
        }
        return count;
    }
};

int main(){
    Solution solution;
    solution.countFactors(10000);
    return 0;
}