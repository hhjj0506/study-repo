#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[12];

// 
/*
1 : 1 (1)
2 : 1+1, 2 (2)
3 : 1+1+1, 1+2, 2+1, 3 (4)
4 : 1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2, 1+3, 3+1  (7)
5 : 1+1+1+1+1, 1+1+1+2, 1+1+2+1, 1+2+1+1, 2+1+1+1, 1+1+3, 1+3+1, 3+1+1, 2+2+1, 2+1+2, 1+2+2,
2+3, 3+2 (13)

f(n) = f(n-1) + f(n-2) + f(n-3)
*/
int main(int argc, char const *argv[])
{ 
    vector<int> arr;
    int num, ptr, temp;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 12; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    for (int i = 0; i < arr.size(); i++) {
        ptr = arr[i];
        cout << dp[ptr] << "\n";
        ptr = 0;
    }
    

    return 0;
}