#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("roboherd.in", "r", stdin);
    freopen("roboherd.out", "w" , stdout);

    int n, K;
    cin >> n, K;
    vector<vector<int>> prices;
    for(int i = 0; i < n; i++){
        int M;
        cin >> M;
        vector<int> PI;
        prices.push_back(PI);
        for(int j = 0; j < M; j++){
            int P;
            cin >> P;
            prices[i].push_back(P);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j : prices[i]){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
