/* 프로그래머스 챌린지  |  콜라츠 추측 */

#include <stdio.h>

int solution(int num)
{
    long long ans = num;
    int cnt = 0;

    if (ans == 1)
        return 0;

    while (1)
    {
        if (ans == 1)
            return cnt;
        if (ans % 2 == 0) ans/=2, cnt++;
        else ans = ans * 3 + 1, cnt++;
        if (cnt > 499)
            return -1;
    }
}