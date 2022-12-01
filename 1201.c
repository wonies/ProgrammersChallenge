/* 프로그래머스 챌린지  |  없는 숫자 더하기 */
#include <stdio.h>
#include <string.h>

int arr[10];

int solution(int numbers[], size_t numbers_len)
{
    int answer = 0;
    
    for (int i=0; i<numbers_len; i++)
        arr[numbers[i]]++;
    for (int i=0; i<10; i++)
    {
        if (arr[i] == 0)
            answer += i;
    }
    // change1
    return answer;
}