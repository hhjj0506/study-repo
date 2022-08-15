#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    
    int n, m, temp;
    vector<int> arr, ans;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        if (binary_search(arr.begin(), arr.end(), temp)) {
            ans.push_back(1);
        } else {
            ans.push_back(0);
        }
    }

    for (auto i : ans) {
        cout << i << "\n";
    }

    return 0;
}