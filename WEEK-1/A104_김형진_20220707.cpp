#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp, cost = 0;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    for (auto j : arr) {
        cost += j;
    }
    cost = cost - arr[arr.size()-1];
    cout << cost;

    return 0;
}