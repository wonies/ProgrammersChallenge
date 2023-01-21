/* 프로그래머스 챌린지  |   정수 제곱근 판별 */

#include <stdio.h>

long long solution(long long n) {
    for(long long i=1; i*i <= n; i++)
    {
        if (i*i == n)
            return (i+1) * (i+1);
    }
    return -1;
}
