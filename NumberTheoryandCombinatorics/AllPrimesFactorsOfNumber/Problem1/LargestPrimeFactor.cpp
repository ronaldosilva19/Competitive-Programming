//
// Created by ronaldo on 21/03/23.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/largest-prime-factor2601/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int largestPrimeFactor(int N){
        vector<long long int> primesfactors;

        /*
        Abordagem 1:

            while(N % 2 == 0){
                primesfactors.push_back(2);
                N = N / 2;
            }

            for(int i = 3; i <= sqrt(N); i = i + 2){
                while(N % i == 0){
                    primesfactors.push_back(i);
                    N = N / i;
                }
            }

            if(N > 2){
                primesfactors.push_back(N);
            }

        */

        // Abordagem 2:

        int c = 2;

        while(N > 1){
            if(N % c == 0){
                primesfactors.push_back(c);
                N = N / c;
            }else{
                c++;
            }
        }

        return primesfactors[primesfactors.size() - 1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0;
}
// } Driver Code Ends