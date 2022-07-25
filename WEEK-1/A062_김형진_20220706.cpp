#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[] ={ "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int total = 0;
    
    for (int i = 1; i < a; i++) {
        total += month[i-1];
    }
    total += b-1;
    answer = day[total % 7];
    return answer;
}