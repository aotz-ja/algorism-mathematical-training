//入力値 N から N 番目のリュカ数を求める
//リュカ数の定義は以下
/*i番目のリュカ数を L_iとすると
L_0 = 2
L_1 = 1
L_i = L_(i-1) + L_(i-2)  (ただし、i≧2)
と定義される数とする。*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int64_t> L(N+1);
    L.at(0) = 2;
    L.at(1) = 1;
    for(int i = 2; i < N+1; i++){
        L.at(i) = L.at(i-2) + L.at(i-1);
    }
    cout << L.at(N) << endl;
}