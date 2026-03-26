#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> t(N), x(N), y(N);
    for(int i=0; i<N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }

    vector<int> delta_t(N-1), delta_x(N-1), delta_y(N-1);
    for(int i=0; i<N-1; i++){
        delta_t[i] = t[i+1] - t[i];
        delta_x[i] = x[i+1] - x[i];
        delta_y[i] = y[i+1] - y[i];
    }

    if((t[0] + x[0] + y[0]) % 2 != 0 || abs(x[0]) + abs(y[0]) > t[0]){
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < N-1; i++){
        if ((delta_t[i] + delta_x[i] + delta_y[i]) % 2 != 0 || abs(delta_x[i]) + abs(delta_y[i]) > delta_t[i]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}