#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ans;
    vector<int> nums1, nums2;
    int j = 0;

    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(2);

    nums2.push_back(1);
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(2);
    
    for (int i = 0; i < nums1.size(); i++) {
        if (nums1[i] == nums2[j]) {
            if (nums2[j] < nums2[j+1]) {
                ans.push_back(nums2[j+1]);
            } else {
                ans.push_back(-1);
            }
        }
        while (nums1[i] != nums2[j]) {
            j++;
            
            if (nums1[i] == nums2[j] && j+1 <= nums2.size()) {
                if (j+1 >= nums2.size()) {
                    ans.push_back(-1);
                } else {
                    if (nums2[j] < nums2[j+1]) {
                        ans.push_back(nums2[j+1]);
                    } else {
                        ans.push_back(-1);
                    }
                }
            }
        }
        j = 0;
    }
    
    for (auto i : ans) {
        cout << i << " ";
    }
}
