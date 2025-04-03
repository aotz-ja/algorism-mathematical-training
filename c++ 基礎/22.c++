// N 個のペア (a_i, b_i) を入力して、b_i の小さい順番に並び替える

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    vector<pair<int, int>> pairs(N);
    cin >> N;
    vector<int> a(N), b(N);
    for(int i = 0; i < N; i++){
        cin >> a.at(i) >> b.at(i);
        pairs.at(i) = make_pair(a.at(i), b.at(i));
    }
    sort(pairs.begin(), pairs.end());
    for(int i = 0; i < N; i++){
    cout << pairs.at(i).first << " " << pairs.at(i).second << endl;
    }
}