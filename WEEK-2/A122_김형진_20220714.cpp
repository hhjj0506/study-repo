#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        bool dec = false;
        char ch;
        
        for (int i = 0; i < s.length(); i++) {
            ch = s[0];
            s.erase(0, 1);
            s += ch;
            
            if (s == goal) dec = true;
        }
        
        return dec;
    }
};