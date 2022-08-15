#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string n;
    vector<string> arr;
    bool check = true;

    while (1) {
        cin >> n;

        if (n == "0") break;

        for (int i = 0; i < n.length(); i++) {
            if (n[i] != n[n.length()-1-i]) {
                check = false;
                break; 
            }
        }

        if (check) arr.push_back("yes");
        else arr.push_back("no");

        check = true;
    }

    for (auto i : arr) {
        cout << i << "\n";
    }

    return 0;
}