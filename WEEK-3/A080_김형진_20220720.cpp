#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0, count = 1, temp;
        
        sort(nums.begin(), nums.end());
        
        temp = nums[0];
        
        if (nums.size() == 1) {
            return nums[0];
        }
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == temp) {
                count++;
            } else {
                temp = nums[i];
                count = 1;
            }
            
            if (count > nums.size() / 2) maj = nums[i];
        }
        
        return maj;
    }
};