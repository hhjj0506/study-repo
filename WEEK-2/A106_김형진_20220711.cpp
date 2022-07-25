#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str, comp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int total = 0, ascii = 65, num;
    vector<int> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;

        for (int i = 0; i < comp.length(); i++) {
            if (str.find(comp[i]) != string::npos) {
                
            } else {
                total += ascii;
            }
            ascii++;
        }

        arr.push_back(total);
        total = 0;
        ascii = 65;
    }

    for (auto j : arr) {
        cout << j << endl;
    }

    return 0;
}