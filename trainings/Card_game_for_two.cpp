#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N;i++){
    cin >> A.at(i);
    }
	sort(A.begin(), A.end());
	reverse(A.begin(), A.end());
	int n = 0;
	for(int i = 0; i < N; i++){
		if(i%2 == 0){
			n+=A.at(i);
		}
		else{
			n-=A.at(i);
		}
	}
	cout << n << endl;
}