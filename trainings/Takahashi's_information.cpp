#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int i, j, k;
	bool b = true;
    vector<vector<int>> data(3, vector<int>(3));
    vector<int> A(3), B(3);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> data.at(i).at(j);
        }
    }
    for(i = 0; i < data.at(0).at(0); i++){
        A.at(0) = i;
        for(j = 0; j < 3; j++){
            B.at(j) = data.at(0).at(j) - i;
        }
	A.at(1) = data.at(1).at(0) - B.at(0);
	A.at(2) = data.at(2).at(0) - B.at(0);
	for(j = 1; j < 3; j++){
		for(k = 1; k < 3; k++){
			if(A.at(j) + B.at(k) != data.at(j).at(k)){
				b = false;
				break;
			}
		}
        if(b == false){
            break;
		}
    }
		if(b == false){
            break;
        }
    }
    if(b == true){
        cout << "Yes" << endl;
	}
    else{
        cout << "No" << endl;
		}
	}