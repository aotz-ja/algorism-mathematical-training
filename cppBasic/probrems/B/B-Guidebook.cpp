/*N箇所のレストランの紹介順を決定する
ルール
・市名が辞書順で早いものから紹介する
・同じ市で複数レストランがあるときは点数が高いものから紹介
入力
・紹介するレストラン数N
・レストランの所在都市と評価100点満点
出力
入力した順番で紹介順がどうなるかを表記
*/

#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector <pair<string, int>> p(N);
    vector <pair<string, int>> hoken(N);
    for(int i = 0; i<N; i++){
        cin >> p.at(i).first >> p.at(i).second;
        hoken.at(i).first = p.at(i).first;
        hoken.at(i).second = p.at(i).second;
    }
    sort(p.begin(), p.end());
    int cnt = 0;
    for(int i = 1; i < N; i++){
        if(i==N-1 && p.at(i).first == p.at(i-1).first){
            reverse(p.begin() + cnt, p.end());
        }
        if(p.at(i).first == p.at(i-1).first){
            continue;
        }
        else{
            reverse(p.begin() + cnt, p.end() - N + i);
            cnt = i;
        }
    }
    //cout << " " << endl;
    /*for(int i = 0; i < N; i++){
        cout << p.at(i).first << " " <<p.at(i).second << endl;
    }
    cout << endl;*/
    for(int i=0; i<N; i++){
        for(int j=0; j < N; j++){
            if(p.at(i) == hoken.at(j)){
                cout << j+1 << endl;
            }
        }
    }
}