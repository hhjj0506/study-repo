#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, num;
    char ch;
    string str, temp = "";
    vector<string> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num >> str;

        for (int j = 0; j < str.length(); j++) {
            for (int k = 0; k < num; k++) {
                temp += str[j];
            }
        }

        arr.push_back(temp);
        temp = "";
    }

    for (auto i : arr) {
        cout << i << "\n";
    }

    return 0;
}