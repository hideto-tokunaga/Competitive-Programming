#include <iostream>
using namespace std;

int main(){
    int N, A, B;
    int num = 0, digit_sum = 0, total_sum = 0;

    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++){
        num = i;
        digit_sum = 0;
        while(num > 0){
            digit_sum += num % 10;
            num /= 10;
        }
        if(digit_sum >= A && digit_sum <= B){total_sum += i;}
    }

    cout << total_sum << endl;

}