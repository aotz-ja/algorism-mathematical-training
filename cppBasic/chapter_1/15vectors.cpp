//入力事項 : テスト回数 nからa, b, cそれぞれベクトル作成、(a[n], b[n], c[n])
//操作 aの総得点 * bの総得点 * cの総得点
//出力 : aの総得点 * bの総得点 * cの総得点の結果

#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> scores)
{
    int sum = 0;
    int l = scores.size();
    for(int i = 0; i < l; i++){
        sum += scores.at(i);
    }
    return sum;
}

vector<int> input(int n)
{
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec.at(i);
    }
    return vec;
}

void output(int sum_a, int sum_b, int sum_c)
{
    cout << sum_a * sum_b * sum_c << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a = input(n);
    vector<int> b = input(n);
    vector<int> c = input(n);
    int sum_a = sum(a);
    int sum_b = sum(b);
    int sum_c = sum(c);
    output(sum_a, sum_b, sum_c);
}
