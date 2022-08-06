#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> arr;
    int temp, cnt = 0, one = 0, two = 0;

    for (int i = 0; i < 5; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    temp = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] == temp) {
            cnt++;
        } else {
            if (one != 0) {
                two = cnt;
                temp = arr[i];
                cnt = 1;
            } else {
                one = cnt;
                temp = arr[i];
                cnt = 1;
            }
        }

        if (i == 4) {
            two = cnt;
        }
    }

    if (one == 3 && two == 2) {
        cout << "Yes";
    } else if (one == 2 && two == 3)  {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}