#include <iostream>
using namespace std;

int main(){
    int N;
    int A;
    cin >> N;
    cin >> A;
    bool b = true;
    if(N % 500 > A){
    b = false;
    }
    if(b == true)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
}