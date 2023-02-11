//
// Created by ronal on 2/11/2023.
// Problem description link.
// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?category%5B%5D=Arrays&category%5B%5D=Arrays&page=1&query=category%5B%5DArrayspage1category%5B%5DArrays



pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long int, long long int> two;
    long long int maximum;
    long long int minimum;

    for(int i = 0; i < n; i++){
        if(i == 0){
            maximum = a[i];
            minimum = a[i];
        }else if(a[i] > maximum){
            maximum = a[i];

        }else if(a[i] < minimum){
            minimum = a[i];
        }
    }
    two.first = minimum;
    two.second = maximum;
    return two;

}