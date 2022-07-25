#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int total = 0, temp1 = 0, temp2 = 0;
        
        for (int i = 0; i < ops.size(); i++) {
            if (isdigit(ops[i][0])) {
                st.push(stoi(ops[i]));
            } else if (ops[i][0] == '-') {
                st.push(stoi(ops[i]));
            } else if (ops[i] == "+") {
                temp1 = st.top(); // num1
                st.pop();
                temp2 = st.top(); // num2
                st.push(temp1);
                st.push(temp1 + temp2);
            } else if (ops[i] == "D") {
                st.push(st.top() * 2);
            } else if (ops[i] == "C") {
                st.pop();
            }
        }
        
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }
        
        return total;
    }
};