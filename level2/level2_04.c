/* 프로그래머스 챌린지  | 피보나치 수 */

#include <stdio.h>

int solution(int n)
{
    int i;
    int num1 = 1, num2 = 1, ans= 0;
    if (n < 0)
        return -1;
    if (n == 1 || n == 2)
        return 1;
    else{
        for(i=3; i<=n; i++)
        {
            ans = (num1 + num2) % 1234567;
            num1 = num2;
            num2 = ans;
        }
    }
    return ans;
}