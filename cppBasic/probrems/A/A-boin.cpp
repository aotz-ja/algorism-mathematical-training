//文字が母音かどうかのチェック

#include <iostream>
#include <string>
using namespace std;

int main(){
    char C;
    cin >> C;
    if(C == 'a' || C == 'i' || C == 'u' || C == 'e' || C == 'o'){
        cout << "vowel" << endl;
    }
    else{
        cout << "consonant" << endl;
    }
}