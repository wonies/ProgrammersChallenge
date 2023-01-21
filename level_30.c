/* 프로그래머스 챌린지  | 2016년 */

#include <stdio.h>
#include <stdlib.h>

char* solution(int a, int b) {
    
    int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char day[8][4] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    
    char* ans = (char*)calloc(4, 1);
    
    int cnt = 0;
    for(int i = 0; i < a; i++)
        cnt += month[i];
    cnt += b;
    
    ans = strdup(day[cnt % 7]);
    
    return ans;
}
