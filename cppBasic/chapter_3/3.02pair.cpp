//pair tuple についての勉強
#include <iostream>
#include <string>
#include <utility> //pair 導入
using namespace std;

int main(){
    pair<string, int> p("abc", 3);
    cout << p.first << endl;
    cout << p.second << endl;
    p.first = "hello";
    cout << p.first << endl;
    cout << p.second << endl;

    p = make_pair("*", 1);
    string s;
    int a;
    tie(s,a) = p;
    cout << s << endl;
    cout << a << endl;
    tuple<int, string, bool> data(1, "hi", true);
    cout << get<1>(data) << endl;
    cout << get<2>(data) << endl;
    get<2>(data) = false;
    cout << get<1>(data) << endl;

    data = make_tuple(2,"WORLD", true);
    int b;
    string t;
    bool f;
    tie(b, t, f) = data;
    cout << b << " " << t << " " << f << endl;
}