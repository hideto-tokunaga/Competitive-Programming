#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    unordered_map<int, int> freq;
    long long sum = 0;

    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        sum += x;
        freq[x]++;
    }

    vector<long long> gain;

    for (auto [x, cnt] : freq) {
        gain.push_back(1LL * x * cnt);
    }

    sort(gain.begin(), gain.end(), greater<long long>());

    int use = min(K, (int)gain.size());

    for (int i = 0; i < use; ++i) {
        sum -= gain[i];
    }

    cout << sum << '\n';
    return 0;
}