#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // float말고 double 사용하니까 AC
    double a, b, c;

    cin >> a >> b;

    c = a / b;

    printf("%.9lf", c);

    return 0;
}