//
// Created by ronal on 2/12/2023.
// Problem description link.
// https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem

#include <bits/stdc++.h>
#define N 1000000

using namespace std;

bool isPrime(unsigned long long n){

    if(n == 2 || n == 3){
        return true;

    }else if(n <= 1 || n % 2 == 0 || n % 3 == 0){
        return false;
    }else{
        for(int i = 5; i * i <= n; i += 6){
            if(n % i == 0 || n % (i + 2) == 0){
                return false;
            }
        }
    }
    return true;
}

void PrimesNumbers(vector<unsigned long long> &primes, unsigned long long size){
    unsigned long long sum = 0;
    for(unsigned long long i = 0; i < primes.size(); i++){
        if( primes[i] <= size){
            sum += primes[i];
        }else{
            break;;
        }
    }
    cout << sum << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<unsigned long long> primes;
    unsigned long long t, n;
    for(unsigned long long i = 0; i <= N; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    cin >> t;
    for(unsigned long long a0 = 0; a0 < t; a0++){
        cin >> n;
        PrimesNumbers(primes, n);
    }
    return 0;
}

