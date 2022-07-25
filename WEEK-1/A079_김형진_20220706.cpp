#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, temp;
    int i, j, k, cnt = 0;
    
    for (auto l : commands) {
        i = commands[cnt][0]-1;
        j = commands[cnt][1]-1;
        k = commands[cnt][2]-1;
        
        for (i; i <= j; i++) {
            temp.push_back(array[i]);
        }
            
        sort(temp.begin(), temp.end());
        
        answer.push_back(temp[k]);
        temp.clear();
        
        cnt++;
    }
    
    return answer;
}