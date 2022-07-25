#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str, alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0, biggest = 0, arr[27] = {0}, j = 0;
    bool isSame = false, duplExist = false;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        while (!isSame) {
            if (toupper(str[i]) == alph[j]) {
                arr[j] += 1;
                isSame = true;
            }
            j++;
        }
        j = 0;
        isSame = false;
    }

    for (int i = 0; i < 27; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
            count = i;
        }
    }

    for (int i = 0; i < 27; i++) {
        if (arr[i] == biggest && i != count) {
            duplExist = true;
        }
    }

    if (duplExist) {
        cout << "?";
    } else {
        cout << alph[count];
    }

    return 0;
}