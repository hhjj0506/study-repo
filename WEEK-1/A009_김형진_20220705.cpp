#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

bool solution(string s) {
    bool answer = true;
    bool lenCheck = false, numCheck = true;
    
    if (s.length() == 4 || s.length() == 6) {
        lenCheck = true;
    }
    
    for (int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) numCheck = false;
    }
    
    if (lenCheck && numCheck) {
        answer = true;
    } else {
        answer = false;
    }
    
    return answer;
}