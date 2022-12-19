/* 프로그래머스 챌린지  | 이진변환 반복하기 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* s) {
    int* ans = (int*)calloc(2, sizeof(int));
    int len = strlen(s);
    char *binary = strdup(s);
    int i = 0, cnt_one = 0;
    int cnt_left = 0, cnt_right = 0;
    while (1)
    {
        cnt_left++;
        for (int i=0; i<len; i++)
        {
            if (binary[i] == '0')
                cnt_right++;
            else
                cnt_one++;
        }
        len = 0;
        while (cnt_one != 0)
        {
            binary[len] = cnt_one % 2 + '0';
            cnt_one /= 2;
            len++;
        }
        if (len == 1)
            break ;
    }
    ans[0] = cnt_left;
    ans[1] = cnt_right;
    return ans;
}