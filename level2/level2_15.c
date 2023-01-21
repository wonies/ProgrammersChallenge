/* 프로그래머스 챌린지  | 귤 고르기 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int *A = (int*)a;
    int *B = (int *)b;
    if(*A > *B)
        return 0;
    return 1;
}

int solution(int k, int tangerine[], size_t tangerine_len) {
    int ans = 0;
    int tans[tangerine_len+1];
    int *idx_tans;
    int cnt = 0;
    int max = -1;
    
    for(int i=0; i<tangerine_len; i++)
    {
        tans[i] = tangerine[i];
        if (max < tans[i])
            max = tans[i];
    }
    idx_tans = calloc(max+1, sizeof(int));
    
    for (int i=0; i<tangerine_len; i++)
        idx_tans[tans[i]]++;

    qsort(idx_tans, max+1, sizeof(int), compare);   
   
    int i =0;
    while(k > 0)
    {
        k -= idx_tans[i];
        i++;
        cnt++;   
    }
    return cnt;
}