#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> A[i][j];
        }
    }

    long long score = 0;
    long long max_score = 0;

    for(int i=0; i<M-1; i++){
        for(int j=i+1; j<M; j++){
            for(int k=0; k<N; k++){
                score += max(A[k][i], A[k][j]);
            }
            max_score = max(max_score, score);
            score = 0;
        }
    }
    cout << max_score << endl;
}