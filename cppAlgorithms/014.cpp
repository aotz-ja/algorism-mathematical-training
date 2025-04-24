#include <iostream>
#include <cmath>
using namespace std;
//自然数 N を素因数分解する
int main(){
    long long N;
    cin >> N;
    for(long long i = 2; i < sqrt(N); i++){
        if(N % i == 0){
            cout << i << " ";
            N /= i;
        }
    }
    cout << N << endl;
}