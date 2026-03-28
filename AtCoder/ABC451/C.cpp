#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q;
    cin >> Q;

    int query_num, h;
    multiset<int> tree;

    for(int i=0; i<Q; i++){
        cin >> query_num >> h;
        if(query_num == 1){
            tree.insert(h);
        }
        else if(query_num == 2){
            auto it = tree.upper_bound(h);
            tree.erase(tree.begin(), it);
        }
        cout << tree.size() << endl;
    }
}