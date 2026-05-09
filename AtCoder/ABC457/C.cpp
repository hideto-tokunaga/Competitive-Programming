#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    vector<vector<long long>> A(N);
    for (long long i = 0; i < N; ++i) {
        long long L;
        cin >> L;
        for (long long j = 0; j < L; ++j) {
            long long val;
            cin >> val;
            A[i].push_back(val);
        }
    }

    vector<long long> C(N);
    for (long long i = 0; i < N; ++i) {
        cin >> C[i];
    }

    for (long long i = 0; i < N; ++i) {
        K -= A[i].size() * C[i];
        if (K == 0) {
            cout << A[i][A[i].size() - 1] << "\n";
            return 0;
        }
        if (K < 0) {
            K += A[i].size() * C[i];
            cout << A[i][(K - 1) % A[i].size()] << "\n";
            return 0;
        }
    }
}