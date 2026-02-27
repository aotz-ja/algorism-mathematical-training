/*問題：青カードN枚、赤カードM枚、各カードには文字列。
文字列を一つ言ってそれが書かれているカードを探す。
あればその色を見て青なら+1、赤なら-1。
完全一致しているもののみを考える。
最大で差し引き何点得られるか。*/

/*方針：青、赤それぞれに、何が何枚あるのかがわかればすぐできそう*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> points(n);//候補になる点数のメモ
    vector<string> blue(n);//青に書く文字列一覧
    for (int i = 0; i < n; i++){
        cin >> blue.at(i);
    }
    sort(blue.begin(),blue.end());

    cin >> m;
    vector<string> red(m);//赤に書く文字列一覧
    for (int i = 0; i < m; i++){
        cin >> red.at(i);
    }
    sort(red.begin(),red.end());
    int maximum = 0;
    for(int i = 0; i<n; i++){
        int plus = 0;
        string s = blue.at(i);
        for(int j=0; j<n; j++){
            if(s == blue.at(j)){
                plus++;
            }
        }
        for(int k=0; k<m; k++){
            if(s==red.at(k)){
                plus--;
            }
        }
        maximum=max(plus,maximum);
    }
    cout << maximum << endl;
}