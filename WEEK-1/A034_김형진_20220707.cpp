#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10], mod, count = 0;
    vector<int> unique;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        mod = arr[i] % 42;
        
        if (find(unique.begin(), unique.end(), mod) == unique.end()) {
            unique.push_back(mod);
            count++;
        }
    }

    cout << count;

    return 0;
}