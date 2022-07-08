#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        toupper(str[i]);
    }

    return 0;
}