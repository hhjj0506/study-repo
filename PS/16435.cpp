#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, l, temp;
    vector<int> arr;

    cin >> n >> l;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    for (auto j : arr) {
        if (j <= l) l++;
    }

    cout << l;

    return 0;
}