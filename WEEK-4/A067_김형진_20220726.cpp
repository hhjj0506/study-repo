#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        
        /** for abbaca
        a a  - string empty : push_back
        b ab - not empty but does not match back of string : push_back
        b a  - not empty and back of string matches c : pop_back
        a    - not empty and back of string matches c : pop_back
        c c  - string empty : push_back
        a ca - not empty but does not match back of string : push_back
        */
        for (char c : s) {
            if (!res.empty() && res.back() == c) {
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        
        return res;
    }
};