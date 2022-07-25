#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int cnt = 0, pos = 0, j = 0;
        char temp;
        string ans = "";
        
        cnt = strs.size();
        
        if (strs.size() == 1) {
            return strs[0];
        }
        
        sort(strs.begin(), strs.end());
        
        while (cnt == strs.size() && j < strs[strs.size()-1].length()) {
            cnt = 0;
            if (pos > strs[0].length()) return ans;
            temp = strs[0][pos];
            cnt++;
            for (int i = 1; i < strs.size(); i++) {
                if (pos > strs[i].length()) return ans;
                if (strs[i][pos] == temp) cnt++;
            }   
            
            if (cnt == strs.size()) {
                if (strs[0] == "") {
                    ans = "";
                } else {
                    ans += temp;   
                }
            }
            
            pos++;
            j++;
        }
        
        return ans;
    }
};