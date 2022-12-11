/* 프로그래머스 챌린지  |   이상한 문자 만들기 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* solution(const char* s) 
{
    int len = strlen(s);
    char* ans = (char*)calloc(len + 1, 1);
    char *cpy;
    cpy = strdup(s);
    int flag = 1;
    for(int i=0; i < len; i++)
    {
        if (s[i] == ' ')
            flag = 0;
        if (flag % 2 == 1)
            ans[i] = toupper(cpy[i]);
        else if (flag % 2 == 0)
            ans[i] = tolower(cpy[i]);
        flag++;
    }
    return (ans);
}