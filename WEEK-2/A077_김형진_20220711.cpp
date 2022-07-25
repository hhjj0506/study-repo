#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int tag[9], total = 0, temp;
    vector<int> arr, five;

    for (int i = 1; i < 9; i++) {
        cin >> tag[i];
        arr.push_back(tag[i]);
    }

    sort(arr.begin(), arr.end());

    for (int i = 3; i < 8; i++) {
        total += arr[i];
        for (int j = 1; j < 9; j++) {
            if (arr[i] == tag[j]) {
                five.push_back(j);
            }
        }
    }
    sort(five.begin(), five.end());
    cout << total << endl;
    for (int i = 0; i < 5; i++) {
        cout << five[i] << " ";
    }

    return 0;
}