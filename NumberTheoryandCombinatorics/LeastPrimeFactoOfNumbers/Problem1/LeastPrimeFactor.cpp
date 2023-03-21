//
// Created by ronaldo on 21/03/23.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    vector<int> leastPrimeFactor(int n) {
        vector<int> primefactors(n + 1, 0);

        primefactors[1] = 1;

        for(int i = 2; i <= n; i++){

            if(primefactors[i] == 0){
                primefactors[i] = i;

                for(int j = i * i; j <= n; j += i){
                    if(primefactors[j] == 0){
                        primefactors[j] = i;
                    }
                }
            }
        }

        return primefactors;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends