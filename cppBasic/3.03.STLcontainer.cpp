#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> score;
    score["Alice"] = 100;
    score["Dave"] = 95;
    score["Bob"] = 89;
    cout << score.size() <<endl;
    score.erase("Bob");
    cout << score.size() <<endl;
    score["Bob"] = 89;
    if(score.count("Alice")){
        cout << "Alice: " << score.at("Alice") << endl;
    }
    if(score.count("Bob")){
        cout << "Bob: " << score.at("Bob") << endl;
    }
    for(auto p : score){
        auto k = p.first;
        auto v = p.second;
        cout << k << " => " << v << endl;
    }
}