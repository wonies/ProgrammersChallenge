/* 프로그래머스 챌린지  |   음양더하기 */
#include <stdio.h>
#include <stdbool.h>

int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) 
{
    int answer = 0;
    int abs = 1;
    
    for (int i=0; i < absolutes_len; i++)
    {
        if (signs[i] == 1) abs = 1;
        else    abs = -1;  
        answer += (absolutes[i] * abs);
    }
    return answer;
}