//
// Created by ronal on 2/11/2023.
// Problem description link.
// https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=1&query=category%5B%5DArrayspage1category%5B%5DArrays

int sumElement(int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
