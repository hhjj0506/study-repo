#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

string solution(string s) {
    string answer = "";
    bool followNum = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            followNum = true;
            answer += s[i];
        } else if (s[i-1] == ' ') {
            answer += toupper(s[i]);
        } else if (s[i] == ' ') {
            followNum = false;
            answer += s[i];
        } else if (i == 0 && !isdigit(s[i])) {
            answer += toupper(s[i]);
        } else {
            answer += tolower(s[i]);
        }
    }
    
    return answer;
}