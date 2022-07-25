#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int i = 0;
        
        while (i < s.length()) {
            if (s[i] == '#') {
                if (i == 0) {
                    s.erase(i, 1);
                } else {
                    s.erase(i-1, 2);
                    i--;   
                }
            } else {
                i++;
            }
        }
        
        i = 0;
        
        while (i < t.length()) {
            if (t[i] == '#') {
                if (i == 0) {
                    t.erase(i, 1);
                } else {
                    t.erase(i-1, 2);
                    i--;   
                }
            } else {
                i++;
            }
        }
        
        if (s == t) {
            return true;
        } else {
            return false;
        }
    }
};