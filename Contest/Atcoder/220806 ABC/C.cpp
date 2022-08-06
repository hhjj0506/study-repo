#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m, arr[10] = {0};
    bool orderCheck = true;

    cin >> n >> m;

    // initialize
    for (int i = 0; i < n; i++) {
        arr[i] = i+1;
    }

    // check if #s are in order and does not exceed the limit
    while (orderCheck) {
        // print out the line first
        for (int i = 0; i < n; i++) {
            if (i == n-1) {
                cout << arr[i] << "\n";
            } else {
                cout << arr[i] << " ";
            }
        }

        // check
        if (arr[n-1] < m) arr[n-1]++;

        if ()
        for (int i = 0; i < n; i++) {
            if ()
        }
    }

    return 0;
}