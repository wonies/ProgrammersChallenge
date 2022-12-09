/* 프로그래머스 챌린지  |   콜라츠 추측 */

#include <stdio.h>
#include <stdlib.h>

int solution(int num) 
{
    int ans = 0;
    if (num == 1)
        return 0;
    if (num % 2 == 0)
    {
        while (num == 1)
        {
            num /= 2;
            ans++;
            if (ans > 499)
                return -1;
        }
    }
    else
    {
        while (num == 1)
        {
            num = num * 3 + 1;
            ans++;
            if (ans > 499)
                return -1;
        }
    }
    return ans;
}

int main()
{
    int n1 = 6;
    int n2 = 16;
    int n3 = 626331;

    printf("--1--%d\n, --2--%d\n, --3--%d\n", solution(n1), solution(n2), solution(n3));
}