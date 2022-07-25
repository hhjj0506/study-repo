#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt = 0, yCnt = 0;
    char c;
    
    for (int i = 0; i < s.length(); i++) {
        c = toupper(s[i]);
        
        if (c == 'P') pCnt++;
        if (c == 'Y') yCnt++;
    }
    
    if (pCnt == yCnt) answer = true;
    else {answer = false;}

    return answer;
}