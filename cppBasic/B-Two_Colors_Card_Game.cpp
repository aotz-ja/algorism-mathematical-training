/*問題：青カードN枚、赤カードM枚、各カードには文字列。
文字列を一つ言ってそれが書かれているカードを探す。
あればその色を見て青なら+1、赤なら-1。
完全一致しているもののみを考える。
最大で差し引き何点得られるか。*/

/*方針：青、赤それぞれに、何が何枚あるのかがわかればすぐできそう*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, max;
    cin >> n;
    vector<string> blue(n);
    for (int i = 0; i < n; i++){
        cin >> blue.at(i);
    }
    sort(blue.begin(),blue.end());

    cin >> m;
    vector<string> red(m);
    for (int i = 0; i < m; i++){
        cin >> red.at(i);
    }
    sort(red.begin(),red.end());

    for(int i=0; i<n; i++){
        if(blue.at(i) == blue.at(i+1)){
            continue;
        }
        else if(i==n-1){
            break;
        }
        else{
        string s = blue.at(i);
        int plus=0;
        for(int j=i; j<n; j++){
            if(blue.at(j)==s){
                plus++;
            }
            else{
                break;
            }
        }
        }
    }
}