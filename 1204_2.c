/* 프로그래머스 챌린지  |   내적 */

#include <stdio.h>
#include <stdlib.h>

int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    
    for (int i=0; i<a_len; i++)
        answer += a[i] * b[i];
    return answer;
}