#include <iostream>
using namespace std;

int main() {
    int M, D;
    cin >> M >> D;

    if(M == D && (M == 3 || M == 5 || M == 7 || M == 9)){
        cout << "Yes\n";
    } else if (M ==1 && D == 7){
        cout << "Yes\n";
    } else{
        cout << "No\n";
    }
}