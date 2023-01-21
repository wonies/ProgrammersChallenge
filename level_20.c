/* 프로그래머스 챌린지  |   자연수 뒤집어 배열로 만들기 */

#include <stdio.h>
#include <stdlib.h>

int* solution(long long num) {
     int* ans = (int *)calloc(11, sizeof(int));
    for (int i=0; num; i++)
    {
        ans[i] = num % 10;
        num /= 10;
    }
    return ans;
}
