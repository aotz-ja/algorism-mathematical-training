//入力 a, b, c;
//min (a, b, c)を出力する

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c) - min(min(a, b), c) << endl;
}