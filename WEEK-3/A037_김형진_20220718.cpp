#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr, digit;
        int temp, count = 0;
        
        for (int i = left; i <= right; i++) {
            temp = i;
            while (temp > 0) {
                digit.push_back(temp%10);
                temp /= 10;
            }
            
            for (auto j : digit) {
                if (j == 0) {
                    
                }
                else if (i % j == 0) count++;
            }
            
            if (count == digit.size()) arr.push_back(i);
            
            digit.clear();
            count = 0;
        }
        
        return arr;
    }
};