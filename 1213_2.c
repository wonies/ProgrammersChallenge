/* 프로그래머스 챌린지  | 문자열 다루기 기본 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char* s) {
    bool ans = false;
    int len = strlen(s);
    
    if (len == 4 || len == 6)
    {
        int i;
        for (i=0; i<len; i++)
        {
            if (s[i] < '0' || s[i] >'9')
                break ;
        }
        if (i==len)
            return ans + 1;
    }

    return ans;
}