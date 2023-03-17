//
// Created by ronal on 3/18/2023.
// Problem link description.
// https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        long long count;
        if(N == 0){
            return 0;
        }else{
            toh(N - 1, from, aux, to);
            cout << "move disk " << N << " from rod " << from << " to rod " << to << "\n";
            toh(N - 1, aux, to, from);
        }
        return (pow(2, N)) - 1;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {

        int N;
        cin >> N;//taking input N

        //calling toh() function
        Solution ob;

        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends