#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> a(t);
    vector<int> b(t);
    int maxA = 0;

    for(int i = 0; i < t; i++){
        int n,m;
        cin >> n >> m;
        a[i] = n;
        if(a[i] > maxA){maxA = a[i];}
        b[i] = m;
    }
    
    vector<int> spf(maxA+1);
    vector<int> omega(maxA+1);
    omega[1] = 0;
    vector<int> prefix(maxA+1);
    prefix[1] = 0;

    for(int i = 2; i <= maxA; i++){
        
        if(spf[i] == 0){
            spf[i] = i;

            for(int j = i; j <= maxA; j += i){
                if(spf[j] == 0){
                    spf[j]=i;
                }
            }
        }
    }

    for(int i = 2; i<= maxA; i++){
        omega[i] = omega[i / spf[i]] + 1;
    }

    for(int i = 2; i <= maxA; i++){
        prefix[i] = prefix[i-1] + omega[i];
    }

    for(int i = 0; i < t; i++){
        cout << prefix[a[i]]- prefix[b[i]] << "\n";
    }
} 