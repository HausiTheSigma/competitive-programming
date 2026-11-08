#include <bits/stdc++.h>
using namespace std;

int main(){
    
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
    int N;
    cin >> N;
    vector<int> numbers = {0,0,0};
    vector<int> mem(3);
    vector<vector<int>> switches(N);
    int max = 0;

    for(int i = 0; i < N; i++){
        int a,b,c;
        cin >> a >> b >> c;
        switches[i].push_back(a);
        switches[i].push_back(b);
        switches[i].push_back(c);
    }
    for(int r = 0; r < 3; r++){
        numbers[r] = 1;
        int stor = 0;
    for(int i = 0; i < N; i++){
        
        mem = numbers;
        mem[switches[i][1]-1] = numbers[switches[i][0]-1];
        mem[switches[i][0]-1] = numbers[switches[i][1]-1];
        numbers = mem;
        
        if(numbers[switches[i][2]-1] == 1){stor++;}
    }
    if(stor > max){max = stor;}
    numbers = {0,0,0};
    }
    cout << max;
    return 0;
}