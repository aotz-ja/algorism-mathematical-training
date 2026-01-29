/*問題：N枚のカードがあって、i枚目にはa_iが書かれている。
AとBは、1枚ずつ取って取ったカードに書かれている数の合計が点数になる。
自分の得点を最大化するようにお互いとり続けた場合、AはBより何点多く取るかを出力*/

/*方針：ソート、リバースで大きい順に並べて足し算引き算を繰り返す*/
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int a=0;
    cin >> N;
    vector <int> p(N);
    for(int i=0; i<N; i++){
        cin >> p.at(i);
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    for(int i=0; i<N; i++){
        if(i%2==0){
            a+=p.at(i);
        }
        else{
            a-=p.at(i);
        }
    }
    cout << a <<endl;
}