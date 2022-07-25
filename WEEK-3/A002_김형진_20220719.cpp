#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> temp, before;
        vector<vector<int>> ans;
        
        if (numRows < 2) {
            temp.push_back(1);
            ans.push_back(temp);
            return ans;
        } else {
            temp.push_back(1);
            ans.push_back(temp);
            temp.push_back(1);
            ans.push_back(temp);
        }
        before = temp;
        temp.clear();
        
        for (int i = 2; i < numRows; i++) {
            temp.push_back(1);
            
            for (int j = 0; j < before.size()-1; j++) {
                temp.push_back(before[j]+before[j+1]);
            }
            
            temp.push_back(1);
            
            ans.push_back(temp);
            before = temp;
            temp.clear();
        }
        
        return ans;
    }
};