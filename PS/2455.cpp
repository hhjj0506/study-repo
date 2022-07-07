#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int in, out, temp = 0, total = 0;

    for (int i = 0; i < 4; i++) {
        cin >> out >> in;
        temp += in - out;

        if (temp > total) total = temp;
    }

    cout << total;

    return 0;
}