#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        long long four = 1;
        bool isPowerOfFour = false;
        if (n == four) {
            isPowerOfFour = true;
            return isPowerOfFour;
        }
        
        while (n != four) {
            four *= 4;
            if (n == four) {
                isPowerOfFour = true;
            }
            
            if (n < four) return isPowerOfFour;
        }
        
        return isPowerOfFour;
    }
};