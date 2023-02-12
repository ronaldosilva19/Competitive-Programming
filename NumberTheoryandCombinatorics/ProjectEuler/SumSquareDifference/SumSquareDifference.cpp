//
// Created by ronal on 2/12/2023.
// Problem description Link.
// https://www.hackerrank.com/contests/projecteuler/challenges/euler006/copy-from/1354371634

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

unsigned long long SumSquareDifference(unsigned long long n){
    unsigned long long sum_qua = 0;
    unsigned long long qua_sum = 0;

    sum_qua = (n * (n + 1) * (2*n + 1)) / 6;
    qua_sum = n * (n +1 ) / 2;
    // for(unsigned long long j = 1; j <= n; j++){
    //     sum_qua += j * j;
    //     qua_sum += j;
    // }
    return (qua_sum * qua_sum) - sum_qua;
}
int main(){
    unsigned long long t;
    cin >> t;
    for(unsigned long long i = 0; i < t; i++){
        unsigned long long n;
        cin >> n;
        cout << SumSquareDifference(n) << endl;
    }

    return 0;
}