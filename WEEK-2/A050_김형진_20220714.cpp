#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
    caArr[] = {'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C'};
    string str;
    vector<int> num;
    bool found = false;
    int j = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        while (!found) {
            if (str[i] == caArr[j]) {
                num.push_back(j);
                found = true;
            }
            j++;
        }

        found = false;
        j = 0;
    }

    for (auto k : num) {
        cout << arr[k];
    }

    return 0;
}