#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, total = 0, temp;
    vector<int> A, B;

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

    // B에서 가장 큰 수를 찾아 A[i]와 곱하고 total에 더한다. 그리고 그 수는 지우기
    for (int i = 0; i < num; i++) {
        temp = *max_element(B.begin(), B.end());
        total += A[i] * temp;
        B.erase(max_element(B.begin(), B.end()));
    }

    cout << total;

    return 0;
}