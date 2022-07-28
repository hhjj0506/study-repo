#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> res, arr;
    vector<float> temp;
    int people = stages.size(), pos;
    float f, comp = -0.0001; 
    
    sort(stages.begin(), stages.end());
    
    // array declaration
    for (int i = 0; i < N; i++) {
        arr.push_back(0);
    }
    
    // 각 스테이지의 도전을 실패한 사람들의 수를 센다
    for (auto j : stages) {
        arr[j-1]++;
    }
    
    // 각 스테이지의 실패율을 계산한다
    for (auto j : arr) {
        if (j != 0) {
            f = (float)j / (float)people;   
        } else {
            f = 0;
        }
        people -= j;
        temp.push_back(f);
    } 
    
    // 실패율과 번호에 따라 결과 배열에 넣는다
    for (int i = 0; i < temp.size(); i++) {
        for (int j = 0; j < temp.size(); j++) {
            if (temp[j] > comp) {
                comp = temp[j];
                pos = j;
            }
        }
        // 이전에 넣어졌던 번호는 안들어가게 설정한다
        res.push_back(pos+1);
        temp[pos] = -1.0;
        comp = -0.0001;
    }
    
    return res;
}