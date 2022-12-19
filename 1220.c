/* 프로그래머스 챌린지  | 피보나치 */

#include <stdio.h>

int solution(int n)
{
    int i;
    int one = 1, two = 1, ans= -1;

    if (n==1 || n==2)
        return 1;
    else{
        for(i = 3; i<=n; i++)
        {
            ans = (one + two) % 1234567;
            one = two;
            two = ans;
        }
    }
    return ans;
}