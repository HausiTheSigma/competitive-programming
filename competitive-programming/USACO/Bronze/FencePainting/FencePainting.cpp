#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    if (freopen("paint.in", "r", stdin) == nullptr) {
        cerr << "Could not open paint.in\n";
        return 1;
    }
    if (freopen("paint.out", "w", stdout) == nullptr) {
        cerr << "Could not open paint.out\n";
        return 1;
    }

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    int overlap = max(0, min(b, d) - max(a, c));
    int total = (b - a) + (d - c) - overlap;

    cout << total << '\n';
    return 0;
}