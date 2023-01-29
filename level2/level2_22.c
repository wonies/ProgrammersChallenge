/* 프로그래머스 챌린지  | 큰 수 만들기 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* number, int k) {
    
    int len = strlen(number) - k;
    char *ans = calloc(len+1, 1);
    int ans_idx = 0;
    int i = 0;
    int digit = 0;
    int idx = 0;
    while (1)
    {
        if (len == digit)
            break;
        else if (k==0)
        {
            for(int i= idx; i< strlen(number); i++)
                ans[ans_idx++] = number[i];
            break ;
        }
        
        int max_val = -42;
        int max_idx = -42;
        int k_idx = 0;
        
        for(int i = idx; i < idx + k + 1; i++)
        {
            if (max_val < number[i])
            {
                max_val = number[i];
                max_idx = i;
            }
        }

        k_idx = max_idx - idx;
        k -= k_idx;

        idx = max_idx + 1;
        digit++;

        ans[ans_idx++] = max_val;
    }
    return ans;
}