#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, temp, cnt = 0;
    vector<int> arr;

    cin >> n;

    for (int i = 0; i < n-1; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    temp = n;

    for (int i = arr.size()-1; i > 0; i--) {
        if (arr[i-1] < n) {
            cnt++;
            n = arr[i-1];
        }
    }
    cnt++;

    cout << cnt;

    return 0;
}