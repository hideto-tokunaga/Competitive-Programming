#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<int> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i] >> B[i];
    }

    int dep_num = 0;
    for(int i=1; i<M+1; i++){
        for(int j=0; j<N; j++){
            if(A[j] == i){
                dep_num--;
            }
            if(B[j] == i){
                dep_num++;
            }
        }
        cout << dep_num << endl;
        dep_num = 0;
    }
}