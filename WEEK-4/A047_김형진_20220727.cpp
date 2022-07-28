#include <iostream>
using namespace std;

int main()
{
    string s = "";
    int len, cnt = 0;
    
    cin >> s;
    len = s.length();
    
    for (int i = 0; i < len; i++) {
        cout << s[i];
        cnt++;
        
        if (cnt >= 10) {
            cout <<'\n';
            cnt = 0;
        }
    }

    return 0;
}