#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, temp;
    string str;
    queue<int> q;
    vector<int> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            cin >> temp;
            q.push(temp);
        } else if (str == "pop") {
            if (q.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(q.front());
                q.pop();
            }
        } else if (str == "size") {
            arr.push_back(q.size());
        } else if (str == "empty") {
            if (q.empty()) {
                arr.push_back(1);
            } else {
                arr.push_back(0);
            }
        } else if (str == "front") {
            if (q.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(q.front());
            }
        } else if (str == "back") {
            if (q.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(q.back());
            }
        }
    }

    for (auto i : arr) {
        cout << i << "\n";
    }

    return 0;
}