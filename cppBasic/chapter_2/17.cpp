//N 個ずつの数列の組 A, P に対して, A(i) + P(j) = S になるような組 (i,j) が何通りあるか 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, S, cnt;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    for(int i = 0; i < N; i++){
        cin >> P.at(i);
    }
    cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A.at(i) + P.at(j) == S){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}