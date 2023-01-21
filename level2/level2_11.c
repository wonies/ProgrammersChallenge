/* 프로그래머스 챌린지  | 주식 가격  */

#include <stdio.h>
#include <stdlib.h>

int* solution(int prices[], size_t prices_len) {
    int* ans = (int*)calloc(prices_len, sizeof(int));
    int sec = 0;

    for (int i=0; i < prices_len-1; i++)
    {
        for (int j=i+1; j<prices_len; j++)
        {
            sec = (int)prices_len - 1 - i; 
            if (prices[i] > prices[j])
            {
                sec = j - i;
                break ;
            }   
        }
        ans[i] = sec;
    }
    return ans;
}