/* 프로그래머스 챌린지  |   두개 뽑아서 더하기 */

#include <stdio.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
    int num[201] = {0};
    int temp;
    int* answer;
    int cnt=0;

    for(int i=0; i<numbers_len-1; i++)
    {
        for(int j=i+1; j<numbers_len; j++)
        {
            temp = numbers[i] + numbers[j];
            if (num[temp]==0)
            {
                num[temp] = 1;
                cnt++;
            }
        }
    }
    answer = (int *)calloc(cnt, sizeof(int));
    int idx = 0;
    for(int i=0; i<201; i++)
    {
        if (num[i]==1)
            answer[idx++] = i;
    }

    return answer;
}
