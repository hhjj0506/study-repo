#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, arr[10] ={0}, temp;
    int total;
    string str;

    cin >> a >> b >> c;
    total = a * b * c;

    while (total > 0) {
        temp = total % 10;
        arr[temp] += 1;
        total /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
