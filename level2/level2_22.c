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

    return ans;
}