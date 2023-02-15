//
// Created by ronal on 2/25/2023.
//

#include <bits/stdc++.h>
using namespace std;

int Posicion(int queries, vector<tuple<int, int, int>>& VT){
    int first, last, type, posicion;
    int sum_diff_max = 0;
    int sum_diff_currenty = 0;

    for(int i = 0; i < queries; i++){
        cin >> first >> last >> type;
        if(i == 0) {
            sum_diff_max = last - first;
            posicion = i;
        }else{
            sum_diff_currenty = last - first;
            if(sum_diff_max < sum_diff_currenty){
                sum_diff_max = sum_diff_currenty;
                sum_diff_currenty = 0;
                posicion = i;
            }
        }
        VT.emplace_back(first, last, type);
    }
    return posicion;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    int size, queries;
    vector<tuple<int, int, int>> VT;
    cin >> size >> queries;
    cin.ignore();
    getline(cin, S);

    int p = Posicion(queries, VT);
    for(int i = p; i < VT.size(); i++) {
        if ( get<2>(VT[i]) == 1) {
            sort(S.begin() + get<0>(VT[i]) - 1, S.begin() + get<1>(VT[i]));
        } else if (get<2>(VT[i]) == 0) {
            sort(S.begin() + get<0>(VT[i]) - 1, S.begin() + get<1>(VT[i]), greater<>());
        }
    }
//    for(const auto & i : S){
//        cout << i;
//    }
        cout << S;
    return 0;
}


