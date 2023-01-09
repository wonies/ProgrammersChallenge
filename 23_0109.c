/* 프로그래머스 챌린지  | 할인행사 */
//테케만 돌아가고 submit하면 틀림@
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len) {
    int ans = 0;
    int num_cnt = 0;
    int cpy_num[number_len];
    for(int i=0; i<number_len;i++)
        num_cnt += number[i];
    int len = (int)discount_len - 10;

    for (int i=0; i<len; i++)
    {
        for (int v=0; v< (int)number_len; v++)
            cpy_num[v] = number[v];
        for (int j=i; j < i+num_cnt;j++)
        {
            int check = 0;
            for(int k=0; k< (int)want_len; k++)
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
        for(int i=0; i<number_len;i++)
            all_clear += cpy_num[i];
        printf("{%d}\n", all_clear);
        if (all_clear == 0)
            ans++;
    }
        return ans;
}    

int main()
{
    const char *want[7] = {"banana", "apple", "rice", "pork", "pot"};
    int num[5] = {3, 2, 2, 2, 1};
    const char *dis[20] = {"chicken", "apple", "apple", "banana", "rice", "apple", "pork", "banana", "pork", "rice", "pot", "banana", "apple", "banana"};

    printf("ans : [%d]\n", solution(want, 5, num, 5, dis, 14)); 
}