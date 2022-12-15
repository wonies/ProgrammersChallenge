/* 프로그래머스 챌린지  | 가운데 글자가져오기 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* ans = (char*)calloc(2, 1);
    char *cpy;
    cpy = strdup(s);
    if (len % 2 == 1)
        ans[0] = cpy[len / 2];
    else
    {
        ans[0] = cpy[len / 2 - 1];
        ans[1] = cpy[len / 2];
    }
    
    return ans;
}