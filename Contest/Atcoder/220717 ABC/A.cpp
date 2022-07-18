#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int a = 1, b = 0, c = 0;

    cin >> s;

    if (s[1] == s[0]) {
        a++;
    } else {
        b++;
    }

    if (s[2] == s[0]) {
        a++;
    } else if (s[2] == s[1]) {
        b++;
    } else {
        c++;
    }

    if (a == b && a == c) {
        cout << s[0];
    } else if (a == 1) {
        cout << s[0];
    } else if (b == 1) {
        cout << s[1];
    } else if (c == 1) {
        cout << s[2];
    } else if (c != 1 && b != 1 && a != 1) {
        cout << -1;
    }



    return 0;
}
