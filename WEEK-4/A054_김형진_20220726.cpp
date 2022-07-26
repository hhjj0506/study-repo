#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    stack<int> st;
    int answer = 0, temp = 0, pos;
    
    // 이해를 잘못해서 1시간 동안 어먼 생각만 했다...
    // 각 board[i]가 1, 2, ... 전체인줄 알았음. 근데 또 테스트 케이스는 맞고 채점은 0점 나오고 하니까 뭐가 틀렸는지 고민하고 있었다
    for (auto i : moves) {
        pos = i - 1;
        for (int j = 0; j < board.size(); j++) {
            if (board[j][pos] != 0) {
                temp = board[j][pos];
                board[j][pos] = 0;
                break;
            }
        }
        
        if (temp != 0 && !st.empty() && temp == st.top()) {
            st.pop();
            answer += 2;
        } else if (temp != 0) {
            st.push(temp);
        }
            
        temp = 0;
    }
    
    return answer;
}