#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr;
    int num, digit, count[10];
    cin >> num;

    // iterate through int and get each digit
    while (num > 0) {
        digit = num % 10; 
        num = num / 10;
        cout << digit << "\n";
        arr.push_back(digit);
    }

    return 0;
}
