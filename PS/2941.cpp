#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int i = 0, wordCnt = 0;

    cin >> str;

    while (i < str.length()) {
        if (i < str.length()-2 && str[i] == 'd' && str[i+1] == 'z' && str[i+2] == '=') {
            wordCnt++;
            i += 3;
        } else if (i < str.length()-1 && str[i] == 'c' && str[i+1] == '=') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 'c' && str[i+1] == '-') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 'd' && str[i+1] == '-') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 'l' && str[i+1] == 'j') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 'n' && str[i+1] == 'j') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 's' && str[i+1] == '=') {
            wordCnt++;
            i += 2;
        } else if (i < str.length()-1 && str[i] == 'z' && str[i+1] == '=') {
            wordCnt++;
            i += 2;
        } else {
            wordCnt++;
            i++;
        }
    }

    cout << wordCnt;
    return 0;
}
