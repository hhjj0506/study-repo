#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        vector<char> arr;
        bool found = false;
        int count = 0, i = 0;
        
        while (!found) {
            if (word[count] == ch) {
                found = true;
            }
            arr.push_back(word[count]);
            count++;
            if (count > word.length()) return word;
        }
        
        for (count; count > 0; count--) {
            word[count-1] = arr[i];
            i++;
        }
        
        return word;
    }
};