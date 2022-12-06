/* 프로그래머스 챌린지  |   핸드폰 번호 가리기 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* phone_number) {
    int len = strlen(phone_number);
    char copy[21];
    char* answer = (char*)calloc(len + 1, sizeof(char));
    strcpy(copy, phone_number);

    for(int i=0; i<len-4;i++)
        copy[i] = '*';

    for(int i=0; i<len; i++)
        answer[i] += copy[i];

    return answer;
}