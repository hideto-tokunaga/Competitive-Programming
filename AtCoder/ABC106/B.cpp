#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int div_count = 0;
    int count = 0;

    for(int num=1; num<=N; num+=2){
        for(int i=3; i<=(num+1)/2; i+=1){ // 1とnumを除く約数の数を数えるため、iは3から(num+1)/2までの範囲でチェック
            if(num % i == 0){
                div_count++;
            }
        }
        if(div_count == 6){ // 1, numを除く約数の数が6個であれば、numは8個の約数を持つことになる
            count++;
        }
        div_count = 0;
    }
    cout << count << endl;
}