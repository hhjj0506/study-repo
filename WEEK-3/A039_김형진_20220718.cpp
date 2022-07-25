#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i = 1;
        
        while (num > (i * i) -1) {
            if (num == i * i) {
                return true;
            }
            
            i++;
        }
        
        return false;
    }
};