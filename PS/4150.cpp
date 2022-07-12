#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned long long int dp[10001];
    int num;

    cin >> num;

    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= num; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[num];

    return 0;
}