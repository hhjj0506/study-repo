#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[100000], b[100000], cnt, atemp, btemp;

    cin >> cnt;

    for (int i = 0; i < cnt; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < cnt; i++) {
        if (a[i] > a[i+1]) {
            atemp = a[i];
            btemp = b[i];
            a[i] = a[i+1];
            b[i] = b[i+1];
            a[i+1] = atemp;
            b[i+1] = btemp;
        }
    }

    for (int i = 0; i < cnt; i++) {
        if (a[i] == a[i+1] && b[i] != b[i+1]) {
            
        }
    }

    cout << endl;
    for (int i = 0; i < cnt; i++) {
        cout << a[i] << " " << b[i] << endl;
    }

    return 0;
}
