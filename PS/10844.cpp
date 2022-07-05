#include <iostream>
#include <algorithm>
using namespace std;

int dp[101];

// 
/*
n=1 : 1 2 3 4 5 6 7 8 9 (9)
n=2 : 12, 21, 23, 32, 34, 43, 45, 54, 56 ... (17)
n=3 : 123, 121,
*/
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;

    dp[1] = 9;

    for (int i = 2; i <= num; i++) {
        dp[i] = (dp[i-1] + (dp[i-1]-1)) % 1000000000;
    }

    cout << dp[num];

    return 0;
}