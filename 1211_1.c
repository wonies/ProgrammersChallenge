/* 프로그래머스 챌린지  |   자릿수 더하기 */

#include <stdio.h>

int solution(int n) 
{
    int ans = 0;
    
    for (; n; n/=10)
        ans += n % 10;
    return ans;
}