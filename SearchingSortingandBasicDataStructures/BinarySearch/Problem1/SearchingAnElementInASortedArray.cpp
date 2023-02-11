//
// Created by ronal on 2/11/2023.
// Problem Description Link.
// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1

class Solution{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K)
    {

        int left = 0;
        int right = N - 1;
        int middle;

        while(right >= left){
            middle = (left + right) / 2;
            if(arr[middle] == K){
                return 1;
            }else if(arr[middle] > K){
                right = middle - 1;
            }else {
                left = middle + 1;
            }
        }
        return - 1;


    }
};
