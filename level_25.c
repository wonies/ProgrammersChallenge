/* 프로그래머스 챌린지  | 수박수박수박수박수? */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* ans = (char *)calloc(n+1, sizeof("수"));
    for (int i=0; i<n; i++)
    {
        if (i%2==0)
            strcat(ans, "수");
        else
            strcat(ans, "박");
    }
    return ans;
}
