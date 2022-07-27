#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int num, cnt = 0;
    vector<char> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] != str[j+1]) {
                if (!arr.empty() && count(arr.begin(), arr.end(), str[j+1])) {
                    break;
                }
                arr.push_back(str[j]);
            }
            
            if (j == str.size() - 1) cnt++;
        }
        arr.clear();
    }

    cout << cnt;
    return 0;
}
