#include <bits/stdc++.h>

int main(){
    std::vector<int> input;
    for(int i = 0; i<7; i++){
        int j;
        std::cin >> j;
        input.push_back(j);
    }
    std::vector<int> sorted;
    for(int j = 0; j< size(input); j++){
        double min{1e9};
        double mini{1e9};
        for(int i = 0; i < size(input); i++){
            if(input[i] < min){min = input[i]; mini = i;}
        }
        sorted.push_back(min);
        input.erase(input.begin()+mini);
    }
    
    int C;
    if((sorted[0] + sorted[1]) == sorted[2]){C = sorted[3];} else {C = sorted[2];}
    std::cout << sorted[0] << " " << sorted[1] << " " << C;
    return 0;
}