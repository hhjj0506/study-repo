#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    vector<int> score;
    vector<string> arr;
    int vowelCnt = 0, consCnt = 0;
    bool sameLetter = false, containVowel = false, threeCnt = false;
    char temp;

    while (1) {
        cin >> str;

        if (str == "end") {
            break;
        }

        for (int i = 0; i < str.length(); i++) {
            temp = str[i];
            // must contain at least one vowel
            if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u') {
                containVowel = true;
                vowelCnt++;
                consCnt = 0;
            } else {
                consCnt++;
                vowelCnt = 0;
            }

            // cannot contain 3 consecutive vowels or consonants
            if (vowelCnt >= 3 || consCnt >= 3) {
                threeCnt = true;
            }

            // cannot contain 2 consecutive same letters except 'ee' and 'oo'
            if (i >= 1 && str[i] == str[i-1]) {
                if (str[i] != 'e' && str[i] != 'o') {
                    sameLetter = true;
                }
            }
        }

        arr.push_back(str);

        if (containVowel && !threeCnt && !sameLetter) {
            score.push_back(1);
        } else {
            score.push_back(0);
        }

        containVowel = false;
        threeCnt = false;
        vowelCnt = 0;
        consCnt = 0;
        sameLetter = false;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (score[i] == 1) {
            cout << "<" << arr[i] << "> is acceptable." << endl;
        } else {
            cout << "<" << arr[i] << "> is not acceptable." << endl;
        }
    }

    return 0;
}
