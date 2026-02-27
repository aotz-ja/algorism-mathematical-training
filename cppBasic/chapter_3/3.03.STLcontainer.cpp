//写像の表現、map, erase, count, auto など

#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;

int main(){
    //写像を定義, map
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
    cout << endl;
    queue<int> q;
    q.push(10);
    q.push(3);
    q.push(6);
    q.push(1);

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    cout << endl;
    //大きい順に出力
    priority_queue<int> pq;
    pq.push(10);
    pq.push(3);
    pq.push(6);
    pq.push(1);

    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << endl;
    //小さい順に出力
    priority_queue<int, vector<int>, greater<int>> pqr;
    pqr.push(10);
    pqr.push(3);
    pqr.push(6);
    pqr.push(1);
    while(!pqr.empty()){
        cout << pqr.top() << endl;
        pqr.pop();
    }
    cout << endl;
    deque<int> d;
    d.push_back(10);
    d.push_back(1);
    d.push_back(3);

    cout << d.front() << endl;
    d.pop_front();
    d.pop_back();
    cout << d.front() << endl;
    

}