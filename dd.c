/* 프로그래머스 챌린지  |   자릿수 더하기 */

#include <stdio.h>

int solution(int n) 
{
    int ans = 0;
    for (int i=0; n; ans/=10)
        ans += n % 10;
    return ans;
}

int main()
{
    int n = 123;
    printf("%d\n", n);
}