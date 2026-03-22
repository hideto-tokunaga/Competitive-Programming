#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int A[N];
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int count = 0;
    bool allEven = true;
    while(true){
        for(int i=0; i<N; i++){
            if(A[i] % 2 == 0){
                A[i] /= 2;
            }
            else{
                allEven = false;
                break;
            }
        }
        if(!allEven) break;
        count++;
    }

    cout << count << endl;

}