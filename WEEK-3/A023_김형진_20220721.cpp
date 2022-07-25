#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int temp, res;
        
        res = 10;
        temp = num;
        
        while (res >= 10) {
            res = 0;
            while (temp > 0) {
                res += temp % 10;
                temp /= 10;
            }

            if (res > 0 && res < 10) {
                return res;
            }   
            
            temp = res;
        }
        
        return res;
    }
};