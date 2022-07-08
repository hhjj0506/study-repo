#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, temp;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    cout << arr[0] << " ";
    temp = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (temp == arr[i]) {
            temp = arr[i];
        } else {
            cout << arr[i] << " ";
            temp = arr[i];
        }
    }

    return 0;
}