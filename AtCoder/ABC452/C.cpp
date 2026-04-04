#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    
    int M;
    cin >> M;
    vector<string> S(M);
    for(int j = 0; j < M; j++){
        cin >> S[j];
    }

    unordered_map<int, unordered_set<char>> table;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(S[j].size() == A[i]){
                table[i].insert(S[j].at(B[i] - 1));
            }
        }
    }

    bool all_char_exists = true;
    for(int j = 0; j < M; j++){
        if(S[j].size() != N){
            cout << "No\n";
            continue;
        }
        all_char_exists = true;
        for(int i = 0; i < N; i++){
            if(table[i].count(S[j].at(i)) == 0){
                all_char_exists = false;
                break; 
            }
        }
        cout << (all_char_exists ? "Yes\n" : "No\n");
    }
}