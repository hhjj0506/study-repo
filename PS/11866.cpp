#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, m, temp;
    vector<int> arr, res;

    cin >> num >> m;

    for (int i = 0; i < num; i++) {
        arr.push_back(i+1);
    }

    temp = m;
    while (!arr.empty()) {
        if (temp > arr.size()) temp = temp - arr.size();

        res.push_back(arr[temp-1]);
        arr.erase(arr.begin()+temp-1);

        temp += m;
    }

    for (auto i : res) {
        cout << i << " ";
    }

    return 0;
}