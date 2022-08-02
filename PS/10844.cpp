#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][10];

/*
n=1 : 1 2 3 4 5 6 7 8 9 (9)
n=2 : 10, 12, 21, 23, 32, 34, 43, 45, 54, 56 ... (17)
n=3 : 101, 123, 121, 210, 212, 232, 234, 323, 321, 343

1부터 8까지는 자릿수가 늘어나면 두개의 숫자가 새로 추가되는데,
0과 9가 마지막 숫자라면 자릿수가 하나 늘어나면 1과 8, 하나씩밖에 추가되지 않는다.
따라서 경우의 수는 0일때, 9일때, 1~8일때로 나눌 수 있다.
*/
int main(int argc, char const *argv[])
{
    int num;
    long long ans = 0;
    cin >> num;

    // num=1일때는 이렇게 1씩 더해놓으면 결과때 해당 배열 전체를 더하기 때문에 9가 나온다.
    for (int i = 1; i <= 9; i++) dp[1][i] = 1;

    // 
    for (int i = 2; i <= num; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0) dp[i][j] = dp[i - 1][1];
            else if (j == 9) dp[i][j] = dp[i - 1][8];
            else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

            dp[i][j] %= 1000000000;
        }
    }

    for (int i = 0; i <= 9; i++) {
        ans += dp[num][i];
    }

    ans %= 1000000000;
    cout << ans;

    return 0;
}