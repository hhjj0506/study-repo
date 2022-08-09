#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str, alph = "abcdefghijklmnopqrstuvwxyz";
    int arr[26];

    cin >> str;

    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < alph.length(); j++) {
            if (str[i] == alph[j] && arr[j] < 0) {
                arr[j] = i;
                break;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}