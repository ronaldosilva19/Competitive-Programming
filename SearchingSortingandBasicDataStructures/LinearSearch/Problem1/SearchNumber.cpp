//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/searching-a-number0324/1

//User function template for C++
class Solution{
public:
    int search(int arr[], int n, int k) {
        for(int i = 0; i < n; i++){
            if(arr[i] == k){
                return i + 1;
            }
        }
        return -1;
    }
};