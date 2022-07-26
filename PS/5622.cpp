#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    char ch;
    int cnt = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        ch = str[i];
        
        if (ch == 'A' || ch == 'B' || ch == 'C') {
            cnt += 3;
        } else if (ch == 'D' || ch == 'E' || ch == 'F') {
            cnt += 4;
        } else if (ch == 'G' || ch == 'H' || ch == 'I') {
            cnt += 5;
        } else if (ch == 'J' || ch == 'K' || ch == 'L') {
            cnt += 6;
        } else if (ch == 'M' || ch == 'N' || ch == 'O') {
            cnt += 7;
        } else if (ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S') {
            cnt += 8;
        } else if (ch == 'T' || ch == 'U' || ch == 'V') {
            cnt += 9;
        } else if (ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z') {
            cnt += 10;
        }
    }

    cout << cnt;

    return 0;
}
