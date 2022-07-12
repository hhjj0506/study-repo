#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    vector<char> arr;
    int count = 0, biggest = 0;
    char ch, comp;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        arr.push_back(toupper(str[i]));
    }

    sort(arr.begin(), arr.end());

    ch = arr[0];
    for (auto j : arr) {
        if (j == ch) {
            count++;
        } else {
            ch = j;
            if (count)
            count = 0;
        }
    }

    return 0;
}