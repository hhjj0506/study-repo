#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, count = 0, total = 0;

    cin >> num;

    total = 1000 - num;

    while (total > 0) {
        if ((total - 500) > -1) {
            total -= 500;
        } else if ((total - 100) > -1) {
            total -= 100;
        } else if ((total - 50) > -1) {
            total -= 50;
        } else if ((total - 10) > -1) {
            total -= 10;
        } else if ((total - 5) > -1) {
            total -= 5;
        } else if ((total - 1) > -1) {
            total -= 1;
        }

        count++;
    }

    cout << count;
    return 0;
}