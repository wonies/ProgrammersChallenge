/*프로그래머스 챌린지  |  신고결과받기*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reporting[1001][1001];
int reported[1001];
char  *chart;
char  *report_chart;

int compare_index(const char *charts, const char* id_list[], size_t id_list_len)
{
    for (int i=0; i<id_list_len; i++)
    {
        if (strcmp(charts, id_list[i])==0)  //문자열이 같다면, index추출
            return i;
    }
    return 0;
}

int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) 
{
    int* answer = (int*)calloc(id_list_len, sizeof(int));
    char copy[21]; 
    int c_idx, r_idx;

    for (int i=0; i< report_len; i++)
    {
        strcpy(copy, report[i]); // 문자열 복사해서 쓰래서 복사해서 씀.!./≠
        chart = strtok(copy, " "); // 문자열 기준으로 나누는 함수가 있을거같아서 검색해보니 strtok이 뜸.
        report_chart = strtok(NULL, " "); // NULL " " 하면 뒷 문자열이 추출됨! 
        c_idx = compare_index(chart, id_list, id_list_len);
        r_idx = compare_index(report_chart, id_list, id_list_len);

        if (reporting[c_idx][r_idx] == 0)
        {
            reporting[c_idx][r_idx] = 1;
            reported[r_idx]++;
        }
    }
        for (int i=0; i<id_list_len; i++)
        {
            for(int j=0; j< id_list_len; j++)
            {
                if (reporting[i][j] == 1 && reported[j] >= k)
                    answer[i]++;
            }
        } 
    return answer;
}