#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, way, before, two, three, temp;
    vector<int> arr;

    cin >> num >> way;

    if (way == 1) {
        before = 1;
        way = 0;
    } else {
        before = 0;
        way = 1;
    }

    arr.push_back(way);

    for (int i = 2; i < num; i++) {
        temp = before;
        before = way;
        way = temp;
        arr.push_back(way);
        if (i == 2) two = way;
        if (i % 2 == 0) {
            if (way != two) {
                cout << "Love is open door";
                exit(0);
            }
        }
        if (i == 3) three = way;
        if (i % 3 == 0) {
            if (way != three) {
                cout << "Love is open door";
                exit(0);
            }
        }
    }

    for (auto i : arr) {
        cout << i << endl;
    }

    return 0;
}