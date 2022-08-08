#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long dp[10001];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, k, temp;
    vector<int> arr;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    cout << arr[k-1];

    return 0;
}