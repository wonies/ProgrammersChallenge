/* 프로그래머스 챌린지  |   3진법 뒤집기 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int ans = 0;
    int times = 0;
    int times_n = n;
    int square = 1;

    for (int i=0; times_n/=3 > 0; i++)
    {
        times_n /= 3;
        times++;    
    }
    for (int j=0; n > 0; j++)
    {
        for (int i=0; i < times - 1 ; i++)
            square *= 3;
        ans += (n % 3) * square;
        n /= 3;
        times--;
        square = 1;
    }
    return ans;
}


