#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp, total = 0;
    stack<int> stack;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;

        if (temp == 0) {
            stack.pop();
        } else {
            stack.push(temp);
        }
    }

    while (stack.size() > 0) {
        temp = stack.top();
        total += temp;
        stack.pop();
    }

    cout << total;

    return 0;
}