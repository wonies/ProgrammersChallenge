/* 프로그래머스 챌린지  | 행렬 테두리 회전하기 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[102][102];

int* solution(int rows, int columns, int **queries, size_t queries_row_len, size_t queries_col_len) {
    int* ans = (int*)calloc(queries_row_len, 4);
    int num = 1;
    int idx = 0;

    for (int i=0; i<rows; i++)
        for (int j=0; j<columns; j++)
        {
            arr[i][j] = num;
            num++;
        }
    int x; 
    for(int i=0; i<queries_row_len; i++)
    {
        int min = 2147000000;
        int x1 = queries[i][0];
        int y1 = queries[i][1];
        int x2 = queries[i][2];
        int y2 = queries[i][3];

        int tonext = arr[x1-1][y1-1];
        
        for (int i=y1-1; i<y2-1; i++)
        {
            if (tonext < min)
                min = tonext;
            int temp = arr[x1-1][i+1];
            arr[x1-1][i+1] = tonext;
            tonext = temp;
        }
        for (int i=x1-1; i<x2-1; i++)
        {
            if (tonext < min)
                min = tonext;
            int temp = arr[i+1][y2-1];
            arr[i+1][y2-1] = tonext;
            tonext = temp;
        }
        for (int i=y2-1; i>y1-1; i--)
        {
            if (tonext < min)
                min = tonext;
            int temp = arr[x2-1][i-1];
            arr[x2-1][i-1] = tonext;
            tonext = temp;
        }
        for (int i=x2-1; i>x1-1; i--)
        {
            if (tonext < min)
                min = tonext;
            int temp = arr[i-1][y1-1];
            arr[i-1][y1-1] = tonext;
            tonext = temp;
        }
        ans[idx++] = min;
    }
    
    return ans;
}