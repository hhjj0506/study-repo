#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    string str, temp;
    vector<string> arr;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;
        arr.push_back(str);
        str = "";
    }

    sort(arr.begin(), arr.end());

    for (auto i : arr) {
        cout << i << "\n";
        if (i == temp) {

        } else {
            temp = i;
        }
    }

    return 0;
}