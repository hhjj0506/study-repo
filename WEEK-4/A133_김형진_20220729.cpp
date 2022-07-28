#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        for (int i = 0, j = 0; i <= title.size(); ++i) {
            // if i is at the end of title or blank
            if (i == title.size() || title[i] == ' ') {
                // make the first letter since the last blank uppercase
                if (i - j > 2) {
                    title[j] = toupper(title[j]);
                }
                // set the position of first letter of the word
                j = i + 1;
            }
            else {
                title[i] = tolower(title[i]);
            }
        }
        return title;
    }
};