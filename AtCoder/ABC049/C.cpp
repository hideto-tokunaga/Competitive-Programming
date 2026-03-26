#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin >> S;

    while(!S.empty()){
        if(S.starts_with("dreameraser")){
            S.erase(0, 11);
        }
        else if(S.starts_with("dreamerase")){
            S.erase(0, 10);
        }
        else if(S.starts_with("dreamer")){
            S.erase(0, 7);
        }
        else if(S.starts_with("eraser")){
            S.erase(0, 6);
        }
        else if(S.starts_with("erase") || S.starts_with("dream")){
            S.erase(0, 5);
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

}