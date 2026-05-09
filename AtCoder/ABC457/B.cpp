#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> A(N);
    for (int i = 0; i < N; ++i) {
        int L;
        cin >> L;
        for (int j = 0; j < L; ++j) {
            int val;
            cin >> val;
            A[i].push_back(val);
        }
    }

    int X, Y;
    cin >> X >> Y;

    cout << A[X - 1][Y - 1] << "\n";
}