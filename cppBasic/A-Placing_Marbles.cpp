/*すぬけ君は1,2,3の番号が付いた3つのマスからなるマス目をもっています。
各マスには0or1が書かれていて、マスiにはs_iが書かれています。
すぬけ君は1が書かれたマスにビー玉を置きます。ビー玉が置かれるマスがいくつあるかを
求めてください。*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define N 3

int main(){
    string s;
    int cnt=0;
    cin >> s;
    for(int i=0; i<N; i++){
        if((char)s[i] =='1'){
            cnt++;
        }
    }
    cout << cnt << endl;
}