#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    vector<int> before;
    vector<int> after;
    int a{0}, b{0};
    for(int i = 0; i < 4; i++){
        cin >> a >> b;
        before.push_back(a); after.push_back(b);
        a = 0; b = 0;
    }
    
    int bs{0}, sg{0}, gp{0};

    for(int i = 3; i > 0; i--){
        if(i == 3){
            gp = after[i] - before[i];
            after[i-1] += gp;
        }
        if(i == 2){
            sg = after[i] - before[i];
            after[i-1] += sg;
        }
        if(i == 1){
            bs = after[i] - before[i];
            after[i-1] += bs;
        }

    }

    cout << bs << "\n" << sg << "\n" << gp;
    
    return 0;
}