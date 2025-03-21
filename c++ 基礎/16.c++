#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> data(5);
    for(int i = 0; i < 5; i++){
        cin >> data.at(i);
    }
    bool b = false;
    for(int i = 0; i < 5; i++){
        if(data.at(i) == data.at(i + 1)){
            b = true;
            break;
        }
    }
    if(b == true){
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}