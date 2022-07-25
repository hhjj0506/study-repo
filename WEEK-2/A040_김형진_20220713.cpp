#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int half = s.length() / 2, a = 0, b = 0;
        char temp;
        
        for (int i = 0; i < half; i++) {
            temp = toupper(s[i]);
            
            if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U') {
                a++;
            }
        }
        
        for (int i = half; i < s.length(); i++) {
            temp = toupper(s[i]);
            
            if (temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U') {
                b++;
            }
        }
        
        if (a == b) {
            return true;
        } else {
            return false;
        }
    }
};