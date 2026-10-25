#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int N, K;
    cin >> N >> K;
    string string;
    cin.ignore();
    getline(cin, string);
    vector<std::string> words;
    std::string word;
    for(int i = 0; i < size(string); i++){

        if(string[i] != ' '){
            
           word.push_back( string[i]);
        }
        else{words.push_back(word); word.clear();}
        if(i+1 == size(string)){words.push_back(word);}
        
    }
    int cache = 0;
    for(int i = 0; i < size(words); i++){
        if(i == 0){cout << words[i]; cache += size(words[i]);}
        else if(size(words[i]) <= (K-cache)){
            cout << " " << words[i]; cache += size(words[i]);
        }
        else{cout << endl << words[i]; cache = size(words[i]);}
        
    }
    return 0;
}