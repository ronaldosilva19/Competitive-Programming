//
// Created by ronal on 2/11/2023.
// Problem description link.
// https://practice.geeksforgeeks.org/problems/ticket-counter/0

#include <bits/stdc++.h>
using namespace std;

int TicketCounter(deque<int> &Deque, int K){

    while(Deque.size() != 1){
        for(int i = 0; i < K; i++){
            if(Deque.size() == 1){
                break;
            }else{
                Deque.pop_front();
            }
        }

        for(int j = 0; j < K; j++){
            if(Deque.size() == 1){
                break;
            }else{
                Deque.pop_back();
            }
        }
    }
    return Deque.front();
}

int main() {
    int tests, N, K;
    deque<int> Deque;

    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> N >> K;
        for(int j = 1; j <= N; j++){
            Deque.push_back(j);
        }
        cout << TicketCounter(Deque, K) << "\n";
        Deque.clear();
    }
    return 0;
}