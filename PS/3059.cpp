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

        // string::npos는 해당 문자를 찾지 못했을 때 find()에서 반환된다.
        // 그러므로 반환된 value가 npos가 아니라면 찾았다는 뜻.
        // 우리는 못 찾았을때 total에 더해야하니까 else 문에서 더해준다.
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