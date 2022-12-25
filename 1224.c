/* 프로그래머스 챌린지  | n^2 배열 자르기 */

#include <stdio.h>
#include <stdlib.h>

int *solution(int n, long long left, long long right)
{
    int len = right - left + 1;
    int *ans = (int *)calloc(len, sizeof(int));
    int temp = 0; 
    int start, end;
    int j=0;

    for (long long i=left; i<=right; i++, j++)
    {
        start = i / n;
        end = i % n;
        if (start <= end) 
            temp = end + 1 ;
        else 
            temp = start + 1;
        ans[j] = temp;
    }
    return ans;
}