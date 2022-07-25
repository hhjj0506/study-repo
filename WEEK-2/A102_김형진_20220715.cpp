#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> arr;
        vector<int> temp;
        
        for (int i = 0; i < matrix[0].size(); i++) {
            for (int j = 0; j < matrix.size(); j++) {
                temp.push_back(matrix[j][i]);
            }
            arr.push_back(temp);
            temp.clear();
        }
        
        return arr;
    }
};