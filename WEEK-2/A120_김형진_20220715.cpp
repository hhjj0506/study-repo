#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int sNum = 0, tNum = 0;      
        
        // compare the difference in each character's ASCII value
        for (int i = 0; i < t.length(); i++) {
            sNum += s[i];
            tNum += t[i];
        }
        
        // subtract and get the ASCII code of one character that is different
        return tNum - sNum;
    }
};