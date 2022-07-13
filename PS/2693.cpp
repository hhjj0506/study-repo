#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp;
    vector<int> arr, res;

    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> temp;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());

        res.push_back(arr[7]);
        arr.clear();
    }

    for (auto i : res) {
        cout << i << endl;
    }

    return 0;
}