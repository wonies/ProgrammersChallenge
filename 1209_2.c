/* 프로그래머스 챌린지  |   짝수와 홀수 */

#include <stdio.h>
#include <stdlib.h>

char *solution(int num)
{
    int size = 0;
    size = (num % 2 == 0) ? 4 :  3;
    char *ans = (char *)calloc(size + 1, 1);
    if (size == 4) ans[0] = 'E' ,ans[1] = 'v' ,ans[2] = 'e' ,ans[3] = 'n', ans[4] = '\0';
    else ans[0] = 'O', ans[1] = 'd', ans[2] = 'd', ans[3] ='\0';
    return ans;
}