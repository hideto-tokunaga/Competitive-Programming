#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for(int i = 0; i <= H - 1; ++i) {
        cin >> S[i];
    }

    int count = 0;
    bool isPointSymmetry = true;
    for(int h1 = 0; h1 <= H - 1; ++h1) {
        for(int h2 = h1; h2 <= H - 1; ++h2) {
            for(int w1 = 0; w1 <= W - 1; ++w1) {
                for(int w2 = w1; w2 <= W - 1; ++w2) {
                    isPointSymmetry = true;
                    for(int i = h1; i <= h2; ++i) {
                        for(int j = w1; j <= w2; ++j) {
                            if(S[i][j] != S[h1 + h2 - i][w1 + w2 - j]) {
                                isPointSymmetry = false;
                                break;
                            }
                        }
                        if(isPointSymmetry == false) break;
                    }
                    if(isPointSymmetry == true) ++count;
                }
            }
        }
    }
    cout << count << "\n";
}