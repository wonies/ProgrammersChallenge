/* 프로그래머스 챌린지  | 괄호회전하기 */

#include <stdio.h>
#include <string.h>

char cpy[2001];
int stack[4002];

int solution(const char* s) {
    int ans = 0;
    int cnt = -1;
    int flag = 0;
    int len = strlen(s);
    strcpy(cpy, s);
    strcat(cpy, s);
    char bracket;
    
    for(int i=0; i<len; i++)
    {
        for (int j=i; j<len+i; j++)
        {
            bracket = cpy[j];
            flag = 0;
            if (bracket == '(') stack[++cnt] = 0;
            else if (bracket == '[') stack[++cnt] = 1;
            else if (bracket == '{') stack[++cnt] = 2;
            else if (bracket == ')' && cnt >= 0 && stack[cnt] == 0 ) cnt--;
            else if (bracket == ']' && cnt >=0 && stack[cnt] == 1) cnt--;
            else if (bracket == '}' && cnt >= 0 && stack[cnt] == 2) cnt--;
            else
            {
                flag = 1;
                break ;
            } 
        }
        if (cnt == -1 && flag == 0)
            ans++;
    }
    return ans;
}