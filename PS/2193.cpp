#include <iostream>
#include <algorithm>
using namespace std;

long long dp[91];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    /*
    n = 1: 1 == 1
    n = 2: 10, 11 == 1
    n = 3: 100, 101, 110, 111 == 2 (100, 101) 
    n = 4: 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111 == 3 (1000, 1001, 1010)
    n = 5: 10000, 10001, 10010, 10101, 10100

    마지막 숫자가 0이라면 0과 1 모두 들어갈 수 있지만, 1일 때는 0밖에 들어갈 수 없다.
    그냥 피보나치 수열인데 dp를 int로 선언했어서 바로 틀려버렸다.
    long long으로 선언하니 바로 해결...
    */

    int num;
    long long ans;

    cin >> num;
    
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= num; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    ans = dp[num];
    cout << ans;

    return 0;
}
