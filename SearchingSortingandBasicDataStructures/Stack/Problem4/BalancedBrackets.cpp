//
// Created by ronal on 2/12/2023.
// Problem Description Link.
// https://www.hackerrank.com/challenges/ctci-balanced-brackets/problem

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'isBalanced' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING expression as parameter.
 */

string isBalanced(string str) {
    stack<char> pilha;
    char c;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            pilha.push(str[i]);
            continue;
        }

        if(pilha.empty()){
            return "NO";
        }else if(str[i] == ')'){
            c = pilha.top();
            pilha.pop();
            if(c == '[' || c == '{'){
                return "NO";
            }
        }else if( str[i] == ']'){
            c = pilha.top();
            pilha.pop();
            if(c == '(' || c == '{'){
                return "NO";
            }
        }else if(str[i] == '}'){
            c = pilha.top();
            pilha.pop();
            if(c == '(' || c == '['){
                return "NO";
            }
        }

    }
    if(pilha.empty()){
        return "YES";
    }else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string expression;
        getline(cin, expression);

        string res = isBalanced(expression);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
    );

    return s;
}
