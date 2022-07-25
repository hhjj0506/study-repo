#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        
        while (n != 0) {
            
            // n & 1 : produce value that's either 0 or 1 based on the LSB
            // (Least Significant Bit, the last bit)
            if (n & 1) {
                cnt++;
            }
            
            // after getting the result, shift 1 bit to right
            n = n >> 1;
        }
        
        return cnt;
    }
};