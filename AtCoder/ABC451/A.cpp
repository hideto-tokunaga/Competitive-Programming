#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;

    if(S.length() % 5 == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}