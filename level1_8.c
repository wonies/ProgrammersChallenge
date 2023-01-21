/* 프로그래머스 챌린지  |  로또의 최고 순위와 최저 순위 */
#include <stdio.h>
#include <stdlib.h>

int showmethemoney(int n)
{
    if (n == 6)
        return 1;
    else if (n == 5)
        return 2;
    else if (n == 4)
        return 3;
    else if (n == 3)
        return 4;
    else if (n == 2)
        return 5;
    else
        return 6;
}

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) 
{   
    int* answer = (int*)calloc(2, sizeof(int));
    int max_cnt = 0;
    int min_cnt = 0;
    for (int i=0; i<lottos_len; i++)
    {
        if (lottos[i] == 0) max_cnt++;
        for (int j=0; j<win_nums_len; j++)
        {
            if (lottos[i]==win_nums[j])
            {
                max_cnt++;
                min_cnt++;
            }
        }     
        answer[0] = showmethemoney(max_cnt);
        answer[1] = showmethemoney(min_cnt);    
    }
    return answer; 
}
