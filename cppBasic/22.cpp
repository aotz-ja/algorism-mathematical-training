// N 個のペア (a_i, b_i) を入力して、b_i の小さい順番に並び替える

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> pairs(N);
    for(int i = 0; i < N; i++){
        cin >> pairs.at(i).second >> pairs.at(i).first;
    }
    sort(pairs.begin(), pairs.end());
    for(int i = 0; i < N; i++){
        cout << pairs.at(i).second << " " << pairs.at(i).first << endl;
    }
}