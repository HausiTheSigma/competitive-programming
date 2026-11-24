#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);


    vector<vector<int>> buckets(3);
    int a, b;
    vector<int> pair(2);
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        pair[0] = a;
        pair[1] = b;
        buckets[i] = (pair);
    }
    
    /*for(size_t i = 0; i < buckets.size(); i++){
        std::cout << buckets[i][0]<< "  "<< buckets[i][1] << endl;
    }*/

    for(int i = 0; i < 100; i++){
        int j = i%3;
        int next = (i+1)%3;

            if(buckets[next][0] - buckets[next][1] < buckets[j][1]){

                buckets[j][1] = buckets[j][1] - (buckets[next][0] - buckets[next][1]);
                buckets[next][1] = buckets[next][0];

            }
            else{
                buckets[next][1] = buckets[next][1] + buckets[j][1];
                buckets[j][1] = 0;
            }
        /*for(size_t i = 0; i < buckets.size(); i++){
        std::cout << buckets[i][0]<< "  "<< buckets[i][1] << endl;*/
    }

    for(size_t i = 0; i < buckets.size(); i++){
        std::cout << buckets[i][1] << endl;
    }
}