
// Create by ronal 03/26/2023
// Problem link description.
// https://practice.geeksforgeeks.org/problems/3-data-structures/0
#include <bits/stdc++.h>
using namespace std;

void PrintValues(priority_queue<int>& pq, queue<int>& q, stack<int>& st){
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}

int main() {
    int t, n, x, value;
    priority_queue<int> pq;
    queue<int> q;
    stack<int> st;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> x >> value;
            if(x == 1){
                pq.push(value);
            }else if(x == 2){
                q.push(value);
            }else{
                st.push(value);
            }
        }
        
        PrintValues(pq, q, st);
    }
	return 0;
}
