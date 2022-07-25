#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int total = 0, temp = x;
    
    while (temp > 0) {
        total += temp % 10;
        temp /= 10;
    }
    
    if (x % total == 0) {
        answer = true;
    }
    
    
    return answer;
}