#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (freopen("teleport.in", "r", stdin) == nullptr) {
        cerr << "Could not open teleport.in\n";
        cerr << filesystem::current_path() << '\n';
        return 1;
    }
    if (freopen("teleport.out", "w", stdout) == nullptr) {
        cerr << "Could not open teleport.out\n";
        return 1;
    }

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int da = min(abs(a-b),min(abs(a-x),abs(a-y)));
    if (da == abs(a-b)){cout << abs(a-b); return 0;}
    int db = min(abs(b-x),abs(b-y));
    cout << db + da;
    return 0;
}