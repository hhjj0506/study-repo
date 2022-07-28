#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        char* morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string str = "", alph = "abcdefghijklmnopqrstuvwxyz", comp;
        vector<string> arr;
        int unique = 0;
        char temp;
        
        for (auto i : words) {
            for (int j = 0; j < i.length(); j++) {
                temp = i[j];
                
                for (int k = 0; k < alph.length(); k++) {
                    if (temp == alph[k]) {
                        str += morse[k];
                        break;
                    }
                }
            }
            
            arr.push_back(str);
            str = "";
        }
        
        sort(arr.begin(), arr.end());
        
        for (int i = 0; i < arr.size(); i++) {
            if (i == 0) {
                unique++;
                comp = arr[i];
            } else {
                if (arr[i] != comp) {
                    comp = arr[i];
                    unique++;
                }   
            }
        }
        
        return unique;
    }
};