/* 프로그래머스 챌린지  | 할인행사 */

#include <stdio.h>
#include <string.h>

int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) {
    int ans = 0;
    int num_cnt = 0;
    int cpy_num[number_len];
    for(int i=0; i<number_len;i++)
        num_cnt += number[i];
    int len = (int)discount_len - 10;

    for (int i=0; i<len + 1; i++)
    {
        for (int v=0; v< (int)number_len; v++)
            cpy_num[v] = number[v];
        for (int j=i; j < i+num_cnt;j++)
        {
            int check = 0;
            for(int k=0; k<want_len; k++)
            {
                if (strcmp(want[k], discount[j])!=0)
                    check = -1;
                else if (strcmp(want[k], discount[j])==0)
                {
                    check = k;
                    break ;
                }
            }
            if (check != -1)
                cpy_num[check]--;
            else if (check == -1)
                break ;
        }

        int all_clear = 0;
        for(int i=0; i<(int)number_len ;i++)
        {
          if (cpy_num[i] != 0)
          {
              all_clear = -1;
              break;
          }
          else
             all_clear++;
        }
        if (all_clear == (int)number_len)
            ans++;
    }
        return ans;
} 