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
    answer[len] = 0;
    return answer;
}

int main()
{
    char str[20] = "01033334444";
    char *st = solution(str);
    for(int i=0; i<12; i++)
        printf("%c", st[i]);
    printf("\n");
}