#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    int num, temp;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    for (auto i : arr) {
        if (i == 1) {
            cout << 1 << '\n';
        } else {
            temp = 1;
            for (int j = 1; j < i; j++) {
                temp = (temp * 2) + 1;
            }
            cout << temp << '\n';
        }
    }

    return 0;
}