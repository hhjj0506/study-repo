#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    string temp;

    cin >> num;
    temp = to_string(num);

    sort(temp.begin(), temp.end(), greater<char>());

    cout << temp;

    return 0;
}