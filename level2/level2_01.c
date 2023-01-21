/* 프로그래머스 챌린지  | 최솟값생성 */

#include <stdio.h>

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

int solution(int A[], size_t A_len, int B[], size_t B_len)
{
    int ans = 0;
    int temp=0;

    sort_score(A, 0, A_len-1);
    sort_score(B, 0, A_len-1);
    for(int i=0; i<A_len; i++)
        ans += A[i] * B[B_len-1-i];
    
    return ans;
}