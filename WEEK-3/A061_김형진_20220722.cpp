#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        char c;
        
        while (columnNumber > 0){
            c = (columnNumber-1) % 26 + 'A';
            ans = c + ans;
            columnNumber = (columnNumber - 1) / 26;
        }
        
        return ans;
    }
};