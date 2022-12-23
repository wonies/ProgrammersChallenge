/* 프로그래머스 챌린지  | 멀리 뛰기 */

#include <stdio.h>

long long solution(int n)
{
    long long ans = 2;
    int num1 = 1, num2 = 2;
    if (n == 1)
        ans = 1;
    else if (n == 2)
        ans = 2 ;
    for(int i=3; i<=n; i++)
    {
        ans = (num1 + num2) % 1234567;
        num1 = num2;
        num2 = ans;
    }
    return ans;
}