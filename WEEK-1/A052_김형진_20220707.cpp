#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int num, count = 0, total = 0;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;
        
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'O') {
                count++;
                total += count;
            } else {
                count = 0;
                total += count;
            }
        }

        arr.push_back(total);
        total = 0;
        count = 0;
    }

    for (auto k : arr) {
        cout << k << endl;
    }

    return 0;
}