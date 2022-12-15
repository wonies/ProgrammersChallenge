/* 프로그래머스 챌린지  | 문자열 내림차순으로 배치하기 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(a, b) {char temp=a; a=b; b=temp;}
char* solution(const char* s) {
    int len = strlen(s);
    char* ans = (char*)calloc(len + 1, 1);
    ans = strdup(s);
    char temp;
    for(int i=0; i<len; i++)
    {
        for (int j=i; j<len; j++)
        {
            if (ans[i] < ans[j])
                SWAP(ans[i], ans[j]);
        }
    }
    return ans;
}