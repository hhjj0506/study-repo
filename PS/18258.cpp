#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> queue;
    string order;
    int num, temp;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> order;

        if (order == "push") {
            cin >> temp;
            queue.push(temp);
        } else if (order == "pop") {
            if (queue.empty()) {
                arr.push_back(-1);
            } else {
                temp = queue.front();
                queue.pop();
                arr.push_back(temp);
            }
        } else if (order == "size") {
            arr.push_back(queue.size());
        } else if (order == "empty") {
            if (queue.empty()) arr.push_back(1);
            else arr.push_back(0);
        } else if (order == "front") {
            if (queue.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(queue.front());
            }
        } else if (order == "back") {
            if (queue.empty()) {
                arr.push_back(-1);
            } else {
                arr.push_back(queue.back());
            }
        }
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}