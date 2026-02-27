// pair, reverse, sort の使い方を勉強

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

int main(){
    vector<pair<int, int>> p(4);
    p.at(0) = make_pair(3,4);
    p.at(1) = make_pair(5,6);
    p.at(2) = make_pair(7,8);
    p.at(3) = make_pair(3,5);
    sort(p.begin(), p.end());
        for(int i=0; i<4; i++){
        cout << p.at(i).first << " " << p.at(i).second << endl;
    }
    reverse(p.begin()+1, p.end()-1);
    cout << endl;
    for(int i=0; i<4; i++){
        cout << p.at(i).first << " " << p.at(i).second << endl;
    }
}