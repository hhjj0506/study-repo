#include <iostream>
using namespace std;

int main()
{
    int c, n, *arr, ave = 0;
    float *res, temp = 0;
    
    cin >> c;
    res = new float[c];
    
    for (int i = 0; i < c; i++) {
        cin >> n;
        arr = new int[n];
        
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            ave = ave + arr[j];
        }
        ave = ave / n;
        // 학생들과 평균 점수 비교, 초과하면 포함
        // 백분율로 평균 이상을 받은 학생의 비율 나타내기
        // (x / y) * 100 = percentage
        for (int l = 0; l < n; l++) {
            if (arr[l] > ave) temp++;
        }
        res[i] = (temp / (float)n) * 100;
        ave = 0;
        temp = 0;
    }
    
    for (int k = 0; k < c; k++) {
        printf("%.3f%\n", res[k]);
    }
    

    return 0;
}