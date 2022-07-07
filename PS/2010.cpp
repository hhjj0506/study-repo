#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp, total = 0;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    for (auto j : arr) {
        total += j;
    }

    total = total - (num-1);

    cout << total;

    return 0;
}
