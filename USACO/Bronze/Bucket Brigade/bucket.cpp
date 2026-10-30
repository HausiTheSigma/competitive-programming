#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    vector<vector<char>> cordsyx;
    vector<char> str;
    vector<int> B;
    vector<int> R;
    vector<int> L;
    vector<int> BL;
    vector<int> RL;
    vector<int> BR;
    vector<int> local(2);
    string inp;
    for(int j = 0; j<10; j++){
        
        getline(cin, inp);

        for(int i = 0; i < 10; i++){
            str.push_back(inp[i]);
            if(inp[i] == 'B'){B.push_back(j); B.push_back(i);}
            if(inp[i] == 'R'){R.push_back(j); R.push_back(i);}
            if(inp[i] == 'L'){L.push_back(j); L.push_back(i); local[0] = L[0]; local[1] = L[1];}
        }
        cordsyx.push_back(str);
        str.clear();
        inp.clear();
    }

    for(int i = 0; i < 2; i++){
        BL.push_back(B[i]-L[i]);
        //cout << BL[i] << endl;
        RL.push_back(R[i]-L[i]);
        //cout << RL[i] << endl;
        BR.push_back(B[i]-R[i]);
        //cout << BR[i] << endl;
    }
    int count = 0;
    while(abs(local[0]-B[0])+abs(local[1]-B[1]) != 1){
        vector<int> localram = local;
        if(B[0] > local[0]){
            local[0]++;
            if(local == R){local[0]--;}
            else{cordsyx[local[0]][local[1]] = 'C';count++;continue;}
        }
        if(B[1] > local[1]){
            local[1]++;
            if(local == R){local[1]--;}
            else{cordsyx[local[0]][local[1]] = 'C';count++;continue;}
        }
        if(B[0] < local[0]){
            local[0]--;
            if(local == R){local[0]++;}
            else{cordsyx[local[0]][local[1]] = 'C';count++;continue;}
        }
        if(B[1] < local[1]){
            local[1]--;
            if(local == R){local[1]++;}
            else{cordsyx[local[0]][local[1]] = 'C';count++;continue;}
        }
        
        if(localram == local){
        if(B[0] == local[0]){
            local[0]++;
            cordsyx[local[0]][local[1]] = 'C';count++;continue;
        }
        if(B[1] == local[1]){
        local[1]++;
        cordsyx[local[0]][local[1]] = 'C';count++;continue;
        }
        }
        
    }
    cout << count << endl;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cout << cordsyx[i][j];
        }
        if(i != 9){cout << endl;}
    }
}