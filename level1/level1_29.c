/* 프로그래머스 챌린지  | 두 정수 사이의 합 */

#include <stdio.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long ans = 0;
    
    if (a > b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    for(int i=a; i<=b; i++)
    {
        if (a==b)
            return a;
        ans += i;
    }
    return ans;
}
