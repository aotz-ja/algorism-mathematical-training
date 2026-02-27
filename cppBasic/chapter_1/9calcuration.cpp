//x, a, bを入力
//出力１ : x + 1;
//出力２ : (x + 1) * (a + b);
//出力３ : (出力２)^2;
//出力４ : (出力３) - 1;
//条件 : x, a, bは100以下の自然数

#include <iostream>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;
    x++;
    cout << x << endl;
    x *= (a + b);
    cout << x << endl;
    x *= x;
    cout << x << endl;
    x -= 1;
    cout << x << endl;
}