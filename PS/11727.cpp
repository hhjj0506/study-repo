#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];

// 11726번에서 조건이 하나 추가된 문제다. (2X2 블럭 이용 가능)
/*
n=1 : l 1
n=2 : ll, =, ㅁ 3
n=3 : lll, l=, =l, ㅁl, lㅁ 5
n=4 : llll, l=l, =ll, ll=, ==, llㅁ, lㅁl, ㅁll, ㅁㅁ, =ㅁ, ㅁ= 11

점화식은 f(n) = f(n-1) + (2 * f(n-2)) 이다.
n=4의 경우의 수를 잘못 알고서 풀었다...
경우의 수만 생각할 것이 아니라 더 깊게 생각을 하면서 풀자.
https://jaemin8852.tistory.com/158 <- 여기 설명이 잘 되어있다.
*/
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;

    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= num; i++) {
        dp[i] = (dp[i-1] + (2*dp[i-2])) % 10007;
    }

    cout << dp[num];

    return 0;
}