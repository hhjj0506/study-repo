#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, digit, count[10] = {0}, bigger = 0;
    cin >> num;

    // iterate through int and get each digit
    while (num > 0) {
        digit = num % 10; 
        num = num / 10;
        count[digit]++;
    }

    if ((count[6] + count[9]) % 2 != 0) {
        count[6] = count[9] = (count[6] + count[9] + 1) / 2;
    } else {
        count[6] = count[9] = (count[6] + count[9]) / 2;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > bigger) {
            bigger = count[i];
        }
    }

    cout << bigger;

    return 0;
}
