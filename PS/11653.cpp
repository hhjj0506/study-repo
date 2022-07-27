#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, divisor = 2;
    vector<int> arr;

    cin >> num;

    if (num == 1) {
        exit(0);
    }

    while (num > 1) {
        if (num % divisor == 0) {
            num /= divisor;
            arr.push_back(divisor);
            divisor = 2;
        } else {
            divisor++;
        }
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}
