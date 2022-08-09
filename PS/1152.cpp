#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    int cnt = 1, spaceCnt = 0;

    /* 테스트 케이스가 좀 더 자세했다면 WA 나왔을 풀이다.
    예 : "    a" 같은 게 나온다면 공백마다 cnt가 올라가고 
    글자가 있기는 하기때문에 cnt가 0으로 되지도 않고 4가 되어 WA
    */
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (i == 0 || i == str.length()-1) {
                spaceCnt++;
            } else {
                cnt++;
                spaceCnt++;
            }
        }
    }

    if (spaceCnt == str.length()) {
        cnt = 0;
    }

    cout << cnt;

    return 0;
}