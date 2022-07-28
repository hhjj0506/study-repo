#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare (pair<int,string> a, pair<int,string> b) {
    if (a.first == b.first) return false;
    return a.first < b.first;
}

int main()
{
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    int num, age;
    string name;
    vector<pair<int, string>> arr;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> age >> name;
        arr.push_back(make_pair(age, name));
    }

    // stable_sort를 이용하면 pair중 first나 second를 지정해 값이 같으면 정렬하지 않는다.
    // 이 문제에서 나온 것 같은 나이(first)가 같으면 정렬하지 않는 문제에서 아주 유용하다.
    stable_sort(arr.begin(), arr.end(), compare);

    for (auto i : arr) {
        // endl에서 \n으로 바꾸니까 시간초과에서 바로 AC 받았다. 최대한 endl 쓰지 않기
        cout << i.first << " " << i.second << '\n';
    }


    return 0;
}
