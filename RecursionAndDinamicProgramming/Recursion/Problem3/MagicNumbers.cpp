//
// Created by ronal on 3/19/2023.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/magic-numbers3143/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int gcd(int x, int y){
        if(y == 0){
            return x;
        }else{
            return gcd(y, x % y);
        }
    }

    long long getVal(int N, int A[]) {
        long long int product = 1;
        long long int result = 0;
        long long int output = 1;
        for(int i = 0; i < N; i++){
            product = (product * A[i]) % 1000000007;
            result = gcd(result, A[i]);
        }

        while(result != 0){
            if(result % 2 == 1){
                output = (output * product) % 1000000007;
            }

            product = (product * product) % 1000000007;
            result = result / 2;
        }
        return output;
    }



};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;
        int A[N];

        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.getVal(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends