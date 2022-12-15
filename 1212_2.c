/* 프로그래머스 챌린지  |   문자열을 정수로 바꾸기 */

#include <stdio.h>
#include <stdlib.h>

int solution(const char* s) {
    int ans = 0;
    char *cpy;
    strcpy(cpy, s);
    ans = atoi(cpy);
    return ans;
}