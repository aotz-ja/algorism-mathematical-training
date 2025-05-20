#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<char>> S(H, vector<char>(W));
    vector<vector<char>> I(H, vector<char>(W));
    
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S.at(i).at(j);
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S.at(i).at(j) == '#'){
                I.at(i).at(j) = '#';
            }
            int cnt = 0;
            for(int k = -1; k < 2; k++){
                for(int l = -1; l < 2; l++){
                    if((k == 0 && l == 0) || i+k < 0 || i+k > H-1|| j+l < 0 || j+l > W-1){
                        break;                            }
                    else{
                        if(S.at(i+k).at(j+l) == '#'){
                        cnt++;
                        }
                    }
                }
            }
            I.at(i).at(j) = (char)cnt;
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << I.at(i).at(j);
            if(j == W-1){
                cout << endl;
            }
        }
    }
}