/* 프로그래머스 챌린지  | k진수에서 소수 개수 구하기 */

/* 1번 테케 :(524287, 2) 시간초과로 math.h sqrt하니 됨*/

#include <stdio.h>
#include <string.h>
#include <math.h>

char kbase[1000];
typedef long long lol;

int isprime(lol num)
{
    if (num < 2)
        return 0;
    for(lol i=2; i<=sqrt(num) ;i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

char *to_kbase(int n, int k)
{
    int base = n;
    int len = 0;

    while (n > 0)
    {
        n/=k;
        len++;
    }
    kbase[len--] = '\0';
    while (len >= 0)
    {
        kbase[len--] += (base % k) + '0';
        base /= k;
    }
    return kbase; 
}


int solution(int n, int k) 
{
    char *kbase = to_kbase(n, k);
    lol i = 0;
    lol num = 0;
    int cnt = 0;

    while (kbase[i])
    {
        if (kbase[i] == '0')
        {
            if (isprime(num))
                cnt++;
            i++;
            num = 0;
        }
        else
        {
            num =  num * 10 + (kbase[i] - '0');
            i++;
        }
    }
    if (isprime(num))
        cnt++;

    return cnt;
}