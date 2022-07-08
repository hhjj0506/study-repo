#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str, temp;
    vector<string> arr;

    cin >> str;
    arr.push_back(str);
    temp = str;

    for (int i = 0; i < temp.length()-1; i++) {
        str.erase(str.begin());
        arr.push_back(str);
    }

    sort(arr.begin(), arr.end());

    for (auto j : arr) {
        cout << j << endl;
    }

    return 0;
}