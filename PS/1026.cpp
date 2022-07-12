#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, total = 0, temp;
    vector<int> A, B, biggest;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> temp;
        A.push_back(temp);
    } 

    sort(A.begin(), A.end());

    for (int i = 0; i < num; i++) {
        cin >> temp;
        B.push_back(temp);
    } 

    // B에서 가장 큰 수를 찾

    return 0;
}