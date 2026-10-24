#include <bits/stdc++.h>

int main(){
    int N;
    std::cin >> N;
    int count(0);
    int min(1e9);
    int max{};

    std::vector<std::vector<int>> list;

    for(int i = 0; i < N; i++){
        int a, b ,c;
        std:: cin >> a >> b >> c;
        std::vector<int> vector;
        vector.push_back(a);
        vector.push_back(b);
        vector.push_back(c);
        list.push_back(vector);
      
    }
    for(int i = 0; i < N; i++){
        if(list[i][0] < min){min = list[i][0];}
    }
    for(int i = 0; i < N; i++){
        if(list[i][1] > max){max = list[i][1];}
    }

    for(int t = min; t < max; t++){
        int sum = 0;
        for (int i = 0; i < N; i++ ){
            if((t>=list[i][0]) && (t<list[i][1])){sum += list[i][2];}
        }
        if(sum > count){count = sum;}
    } 

    std::cout << count << std::endl;
    return 0;
}