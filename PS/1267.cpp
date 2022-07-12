#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, total = 0, temp, M = 0, Y = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;

        Y += (temp / 30+1) * 10;
        M += (temp / 60+1) * 15;
    }

    if (M == Y) {
        cout << "Y M " << Y;
    } else if (M > Y) {
        cout << "Y " << Y;
    } else {
        cout << "M " << M;
    }

    return 0;
}