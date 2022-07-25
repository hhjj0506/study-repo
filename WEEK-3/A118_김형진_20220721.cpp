#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp, j;
        
        for (int i = nums.size()-1; i > -1; i--) {
            if (nums[i] == 0) {
                j = i;
                while (j < nums.size()-1) {
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    j++;
                }
            }
        }
    }
};