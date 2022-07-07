#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, d, winner, grade = 0, temp;

    for (int i = 1; i < 6; i++) {
        cin >> a >> b >> c >> d;
        temp = a + b + c + d;

        if (temp > grade) {
            grade = temp;
            winner = i;
        }
    }

    cout << winner << " " << grade;

    return 0;
}