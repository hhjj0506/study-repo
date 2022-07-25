#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int lCnt = 0, aCnt = 0;
        bool isLate = false;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A') {
                aCnt++;
                lCnt = 0;
            } else if (s[i] == 'L') {
                lCnt++;
                if (lCnt > 2) {
                    isLate = true;
                }
            } else {
                lCnt = 0;
            }
        }
        
        if (aCnt < 2 && !isLate) {
            return true;
        } else {
            return false;
        }
    }
};