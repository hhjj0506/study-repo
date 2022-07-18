#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, y, z, temp, pos, bigger = 0;
    vector<int> math, eng, ans;

    cin >> n >> x >> y >> z;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        math.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        cin >> temp;
        eng.push_back(temp);
    }

    for (int i = 0; i < x; i++) {
        pos = max_element(math.begin(), math.end()) - math.begin();
        math.erase(math.begin() + pos);
        eng.erase(eng.begin() + pos);
        ans.push_back(pos);
    }

    for (int i = 0; i < y; i++) {
        pos = max_element(eng.begin(), eng.end()) - eng.begin();
        math.erase(math.begin() + pos);
        eng.erase(eng.begin() + pos);
        ans.push_back(pos);
    }

    for (int i = 0; i < z; i++) {
        for (int j = 0; j < math.size(); j++) {
            temp = math[j] + eng[j];

            if (temp > bigger) {
                bigger = temp;
                pos = j;
            }
        }
        math.erase(math.begin() + pos);
        eng.erase(eng.begin() + pos);
        ans.push_back(pos);
    }

    sort(ans.begin(), ans.end());

    if (n == x+y+z) {
        for (int i = 0; i < n; i++) {
            cout << i+1 << endl;
        }
        exit(0);
    } else {
        for (auto i : ans) {
            cout << i << endl;
        }
    }

    return 0;
}
