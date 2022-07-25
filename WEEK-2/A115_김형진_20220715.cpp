#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0, a = 0, l = 0, o = 0, n = 0, count = 0;
        
        // 1 balloon = 1b, 1a, 2l, 2o, 1n
        
        for (int i = 0; i < text.length(); i++) {
            if (text[i] == 'b') {
                b++;
            } else if (text[i] == 'a') {
                a++;
            } else if (text[i] == 'l') {
                l++;
            } else if (text[i] == 'o') {
                o++;
            } else if (text[i] == 'n') {
                n++;
            }
        }
        
        while (b>0 && a>0 && l>0 && o>0 && n>0) {
            b--;
            a--;
            l -= 2;
            o -= 2;
            n--;
            
            if (b>-1 && a>-1 && l>-1 && o>-1 && n>-1) count++;
        }
        
        return count;
    }
};