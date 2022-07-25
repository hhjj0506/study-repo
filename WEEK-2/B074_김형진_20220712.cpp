#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0, count = 0;
    long lnum = (long)num;
    
    if (lnum == 1) return 0;
    
    while (lnum != 1) {
        if (lnum % 2 == 0) {
            lnum /= 2;
        } else {
            lnum = (lnum * 3) + 1;
        }
        count++;
        
        /* 
        count가 500이 되지 않았는데 원래라면 절대 그 안에 1이 되지 않는 숫자가 
        결과가 -1이 나오지 않았다. 뭔가 해서 찾아보니 홀 -> 짝 -> 홀 -> 짝 ...
        으로 왔다갔다 하다보면 int overflow가 난다고 한다.
        그래서 주어진 num을 long 타입으로 변경하여 돌려보니 바로 해결
        */
        if (count >= 500) return -1;
    }
    
    answer = count;
    
    return answer;
}