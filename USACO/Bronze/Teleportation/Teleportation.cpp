#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (freopen("teleport.in", "r", stdin) == nullptr) {
        cerr << "Could not open teleport.in\n";
        return 1;
    }
    if (freopen("teleport.out", "w", stdout) == nullptr) {
        cerr << "Could not open teleport.out\n";
        return 1;
    }

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    cout << min(abs(a-b),min(abs(a-x)+abs(b-y),abs(a-y)+abs(b-x)));
    return 0;
}