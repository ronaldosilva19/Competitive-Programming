//
// Created by ronal on 3/18/2023.
// Problem link description.
//https://practice.geeksforgeeks.org/problems/geek-onacci-number/0

#include <iostream>
using namespace std;

long long GeekOnacci(int N, int first, int second, int third){
    if(N == 1){
        return first;

    }else if(N == 2){
        return second;

    }else if(N == 3){
        return third;

    }else{
        return GeekOnacci(N - 1, first, second, third) +
               GeekOnacci(N - 2, first, second, third) +
               GeekOnacci(N - 3, first, second, third);
    }
}

int main() {
    int tests, first, second, third, N;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> first >> second >> third >> N;
        cout << GeekOnacci(N, first, second, third) << "\n";
    }
    return 0;
}
