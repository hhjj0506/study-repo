#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        bool isBigger = false;
        int j;
        
        for (int i = 0; i < nums1.size(); i++) {
            isBigger = false;
            j = 0;
            while (nums2[j] != nums1[i]) {
                j++;
            }
            
            j++;
            
            while (!isBigger && j < nums2.size()) {
                if (nums2[j] > nums1[i]) {
                    ans.push_back(nums2[j]);
                    isBigger = true;
                } else {
                    j++;
                }
            }
            
            if (!isBigger) ans.push_back(-1);
        }
        
        return ans;
    }
};