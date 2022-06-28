#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];


// 피보나치와 같은 수식을 사용한다. f(n) = f(n-1) + f(n-2)
// 쉬워보이지만 이 수식이 사용된다는 것을 잘 파악하는것이 중요하다.
/*
n=1 : " l " (1x2 타일 하나)
n=2 : " ll ", " = " (2x2 타일 하나)
n = 3 : " lll " , " l= ", " =l ",(1x2타일 1개, 2x2타일 1개)
n= 4 : " llll ", " l=l ", " =ll ", " ll= ", == "
여기서 n=4의 경우 첫 3개 경우의 수는 n=3의 경우의 수에서 l만 추가된 것이다.
그리고 마지막 2개 경우의 수 역시 n=2의 경우의 수에서 =만 추가되었다.
그러므로 위의 수식이 적용된다는 것을 알수 있다.
*/
int main(int argc, char const *argv[])
{
    int num;
    cin >> num;

    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= num; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }

    cout << dp[num];

    return 0;
}
