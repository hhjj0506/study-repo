#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    char temp, comp;
    int num, count = 0;
    vector<string> arr;
    vector<char> charArr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;
        arr.push_back(str);
    }

    sort(arr.begin(), arr.end());

    for (auto j : arr) {
        if (count == 0) temp = j[0];

        if (j[0] == temp) {
            count++;
        } else {
            count = 0;
        }

        if (count >= 5) charArr.push_back(j[0]);
    }

    sort(charArr.begin(), charArr.end());

    if (charArr.empty()) {
        cout << "PREDAJA";
    } else {
        for (auto i : charArr) {
            if (i != comp) cout << i;
            comp = i;
        }
    }

    return 0;
}