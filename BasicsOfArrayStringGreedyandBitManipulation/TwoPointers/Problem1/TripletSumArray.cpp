//
// Created by ronaldo on 12/03/23.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    //Function to find if there exists a triplet in the
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        /*Method 1:  Time Limit Exceeded. Complexity O(n3).

        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                for(int k = j + 1; k < n; k++){
                    if(A[i] + A[j] + A[k] == X){
                        return true;
                    }
                }
            }
        }
        return false;

        */

        // Method 2: Two-pointer technique. Complexity O(n2).

        sort(A, A + n);
        int begin, end;

        for(int i = 0; i < n - 2; i++){
            begin = i + 1;
            end = n - 1;

            while(begin < end){
                if(A[i] + A[begin] + A[end] == X){
                    return true;
                }else if(A[i] + A[begin] + A[end] > X){
                    end--;
                }else{
                    begin++;
                }
            }
        }
        return false;

    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,X;
        cin>>n>>X;
        int i,A[n];
        for(i=0;i<n;i++)
            cin>>A[i];
        Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends