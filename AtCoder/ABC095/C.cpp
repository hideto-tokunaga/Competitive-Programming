#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    long long cost = 0;
    
    if (2 * C < min(A, B)) {
        cost += 2 * max(X, Y) * C;
    } else if (2 * C < A + B) {
        cost += 2 * min(X, Y) * C;
        if (X > Y) {
            cost += (2 * C < A) ? (X - Y) * 2 * C : (X - Y) * A;
        } else {
            cost += (2 * C < B) ? (Y - X) * 2 * C : (Y - X) * B;
        }
    } else {
        cost += X * A + Y * B;
    }
    cout << cost << "\n";
}