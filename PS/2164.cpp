#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> queue;
    int num, temp;

    //숫자를 받아서 1, 2, 3, ... n-2, n-1, n이 될때까지 queue에 넣는다
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        queue.push(i);
    }

    //queue size가 1이 될때까지 맨앞 빼고 맨앞을 뒤로 넣는거 반복
    while (queue.size() > 1) {
        // 맨앞 삭제
        queue.pop();
        // 맨앞을 맨뒤로 넣기
        temp = queue.front();
        queue.pop();
        queue.push(temp);
    }

    cout << queue.front();

    return 0;
}