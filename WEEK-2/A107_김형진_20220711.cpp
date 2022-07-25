#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, num = 1, total = 0;
    vector<int> arr;

    cin >> a >> b;

    while (arr.size() < 1000) {
        for (int i = 0; i < num; i++) {
            arr.push_back(num);
        }
        num++;
    }

    for (int i = a-1; i <= b-1; i++) {
        total += arr[i];
    }

    cout << total;

    return 0;
}