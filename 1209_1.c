/* 프로그래머스 챌린지  |   콜라츠 추측 */

#include <stdio.h>
#include <stdlib.h>

int solution(int num)
{
    long long ans = num;
    int cnt = 0;

    if (ans == 1)
        return 0;

    while (1)
    {
        if (ans == 1)
            break ;
        // if (ans % 2 == 0)
        // {
        //     ans /= 2;
        //     cnt++;
        // }
        // else
        // {
        //     ans = ans * 3 + 1;
        //     cnt++;
        // }
        if (ans % 2 == 0) ans/=2, cnt++;
        else ans = ans * 3 + 1, cnt++;
        if (cnt > 499)
            return -1;
    }
    return cnt;
}

int main()
{
    int n1 = 6;
    int n2 = 16;
    int n3 = 626331;

    printf("-n1-%d-\n-n2-%d-\n-n3-%d-\n", solution(n1), solution(n2), solution(n3));
}