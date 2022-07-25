#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    string str;
    float temp;
    vector<float> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        getline(cin, str);

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '@') {
                temp *= 3;
            } else if (str[i] == '%') {
                temp += 5;
            } else if (str[i] == '#') {
                temp -= 7;
            }
        }

        arr.push_back(temp);
    }

    for (auto j : arr) {
        printf("%.2f\n", j);
    }

    return 0;
}