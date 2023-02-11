//
// Created by ronal on 2/11/2023.
// Problem description link.
//

#include <iostream>
#include <vector>
using namespace std;

void inverter(vector<int> &V){
    int start = 0;
    int end = V.size() - 1;

    while(start < end){
        int tmp =  V[start];
        V[start] = V[end];
        V[end] = tmp;
        start++;
        end--;
    }
}

int SumReverse(vector<int> V){
    int sum = 0;
    int square = 0;
    for(int i = 0; i < V.size(); i++){
        square = V[i]*V[i];
        if( i % 2 == 0){
            sum += square;
        }else{
            sum -= square;
        }
    }
    return sum;
}
int main() {

    vector<int> V;
    int tests, size, value;
    cin >> tests;

    for(int i = 0; i < tests; i++){
        cin >> size;
        for(int j = 0; j < size; j++){
            cin >> value;
            V.push_back(value);
        }
        inverter(V);
        cout << SumReverse(V) << "\n";
        V.clear();
    }



    return 0;
}
