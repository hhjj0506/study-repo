#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int pos1, pos2;
        vector<int> arr;
        
        pos1 = 0;
        pos2 = numbers.size() - 1;
        
        while (pos2 > pos1) {
            if (numbers[pos1] + numbers[pos2] == target) {
                arr.push_back(pos1+1);
                arr.push_back(pos2+1);
                return arr;
            } else if (numbers[pos1] + numbers[pos2] > target) {
                pos2--;
            } else {
                pos1++;
            }
        }
        
        return arr;
    }
};