//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1

//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<int> primes;
        for(int i = 0; i <= N; i++){
            if(isPrime(i)){
                primes.push_back(i);
            }
        }
        return primes;
    }

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
};