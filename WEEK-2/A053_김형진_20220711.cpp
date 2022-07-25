#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    string order;
    int num, temp;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> order;

        if (order == "push") {
            cin >> temp;
            st.push(temp);
        } else if (order == "pop") {
            if (st.empty()) {
                arr.push_back(-1);
            } else {
                temp = st.top();
                st.pop();
                arr.push_back(temp);
            }
        } else if (order == "size") {
            arr.push_back(st.size());
        } else if (order == "empty") {
            if (st.empty()) arr.push_back(1);
            else arr.push_back(0);
        } else if (order == "top") {
            if (st.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(st.top());
            }
        }
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}