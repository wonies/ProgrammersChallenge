<<<<<<< HEAD
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int trisnail[10000][10000];

int* solution(int n) {
    int* ans = (int*)calloc(n * (n+1) / 2, sizeof(int));
    int idx = 0;
    int x = -1;
    int y = 0;
    int num = 1;
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
           
            if (i % 3 == 0)
                x++;
            else if (i % 3 == 1)
                y++;
            else if (i % 3 == 2)
                x--, y--;
            trisnail[x][y] = num;
            num++;
        }        
    }
    

    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n; y++)
        {
            if (trisnail[x][y] != 0)
                ans[idx++] = trisnail[x][y];
        }
    }

=======
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
>>>>>>> bbb1c09b533dca192224a526b5b57fe3dfc413d3
    return ans;
}