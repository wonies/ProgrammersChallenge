/* 프로그래머스 챌린지  | 가장 큰 수 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(void *cmp1, void *cmp2)
{
    char str1[9];
    char str2[9];
    
    int a = *(int *)cmp1;
    int b = *(int *)cmp2;
    int diff = 0;
    
    sprintf(str1, "%d%d", a, b);
    sprintf(str2, "%d%d", b, a);
    
    diff = strcmp(str1, str2);
    
    return -diff;
}

char* solution(int numbers[], size_t numbers_len) 
{
 
    int cnt = 0;
    qsort(numbers, numbers_len, sizeof(int), cmp);
    for (int i=0; i<numbers_len; i++)
    {
        char arr[5];
        sprintf(arr, "%d", numbers[i]);
        cnt += strlen(arr);
    }
    char* ans = (char*)calloc(cnt + 1, 1);
 
    if (numbers[0] == 0)
    {
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }
    else
    {
        for(int i=0; i<numbers_len; i++)
        {
            char temp[1001];
            sprintf(temp, "%d", numbers[i]);
            strcat(ans, temp);
        }
    }
    return ans;
}