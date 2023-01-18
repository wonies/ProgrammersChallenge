/* 프로그래머스 챌린지  | 쿼드압축 후 개수 세기 */

#include <stdio.h>
#include <stdlib.h>

int arr[1024][1024];
int ans[2];

void quadpress(int rows, int cols, int len, int **arr)
{
    int flag = 1;
    int stand = arr[rows][cols];

    for (int i=rows; i<rows+len; i++)
    {
        for (int j=cols; j<cols+len; j++)
        {
            if (stand != arr[i][j])
            {
                flag = 0;
                break ;
            }
        }
    }
    if (flag == 1)
        ans[stand]++;
    else
    {
        len /= 2;
        quadpress(rows, cols, len, arr);
        quadpress(rows, cols + len, len, arr);
        quadpress(rows + len, cols, len, arr);
        quadpress(rows + len , cols + len, len, arr);
    }
}

int* solution(int** arr, size_t arr_rows, size_t arr_cols) {
    quadpress(0, 0, arr_rows, arr);
    return ans;
}