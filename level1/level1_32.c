/* 프로그래머스 챌린지  | 명예의 전당 (1) */

#include <stdio.h>
#include <stdlib.h>

void    sort_score(int *rank, int left, int right)
{
    int start = left;
    int end = right;
    int mid = rank[(start + end) / 2];
    while (start <= end)
    {
        while (rank[start] < mid) start++;
        while (rank[end] > mid) end--;

        if (start <= end)
        {
            int temp = rank[start];
            rank[start] = rank[end];
            rank[end] = temp;
            start++;
            end--;
        }
    }
    if (left < end) sort_score(rank, left, end);
    if (right > start) sort_score(rank, start, right);
}

int* solution(int k, int score[], size_t score_len) {
    int* ans = (int*)calloc(score_len, sizeof(int));
    int *temp = calloc(k, sizeof(int));
    for (int i=0; i<score_len; i++)
    {
        if (i < k)
        {
            temp[i] = score[i];
            sort_score(temp, 0, i);
            ans[i]  = temp[0];
        }
        else
        {
            if (temp[0] < score[i])
            {
                temp[0] = score[i];
                sort_score(temp, 0, k-1);
            }
        }
        ans[i] = temp[0];
    }
    return ans;
}
