/* 프로그래머스 챌린지  | 피로도 */

#include <stdio.h>

int check[9];
int ans = 0;
void fatigue(int find, int k, int *dun[2], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (dun[i][0] <= k && check[i] == 0 && dun[i][1] <= k)
        {
            if (ans < find)
                ans = find;
            check[i] = 1;
            fatigue(find + 1, k - dun[i][1], dun, len);
            check[i] = 0;
        }
    }
}

int solution(int k, int dun[][2],  size_t dungeons_rows, size_t dungeons_cols)
{
    fatigue(0, k, dun,dungeons_rows);
    return ans;
}