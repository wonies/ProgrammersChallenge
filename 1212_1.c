/* 프로그래머스 챌린지  |   약수의 합 */

#include <stdio.h>

int solution(int n) 
{
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if (n%i==0)
            ans += i;
    }
    return ans;
}