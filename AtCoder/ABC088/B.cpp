#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    int score_Alice = 0, score_Bob = 0;
    for(int i=0; i<N; i++){
        if(i % 2 == 0){
            score_Alice += a[i];
        }
        else{
            score_Bob += a[i];
        }
    }

    cout << score_Alice - score_Bob << endl;

}