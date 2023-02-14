//
// Created by ronal on 2/12/2023.
// Problem Description Link.
// https://www.hackerrank.com/challenges/cpp-lower-bound/copy-from/307592352

#include <bits/stdc.h>

using namespace std;


void PrintLowerBouder(vector<int> values, int queries){
    vector<int>::iterator it;
    int element;
    for(int i = 0; i < queries; i++){
        cin >> element;

        if(binary_search(values.begin(), values.end(), element)){
            it = lower_bound(values.begin(), values.end(), element);
            cout << "Yes " << it - values.begin() + 1 << endl;
        }else{
            it = lower_bound(values.begin(), values.end(), element);
            cout << "No " << it - values.begin() + 1 << endl;
        }

    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> values;
    int size, value, queries, element;

    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> value;
        values.push_back(value);
    }
    cin >> queries;
    PrintLowerBouder(values,queries);

    return 0;
}

