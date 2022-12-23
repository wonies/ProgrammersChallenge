#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char cpy[2001];

int solution(const char* s) {
    int ans = 0;
    
    strcpy(cpy, s);
    int len = strlen(s);
    strcat(cpy, s);
    int cnt = -1;
    char bracket;
    int stack[2000]= {0, };
    int cpy_len = strlen(cpy);
    int flag = 0;
    printf("%s\n", cpy);

    for(int i=0; i<len; i++)
    {
        for (int j=i; j<len+i; j++)
        {
            bracket = cpy[j];
            flag = 0;
            if (bracket == '(') stack[++cnt] = 0;
            else if (bracket == '[') stack[++cnt] = 1;
            else if (bracket == '{') stack[++cnt] = 2;
            else if (bracket == ')' && stack[cnt] == 0) cnt--;
            else if (bracket == ']' && stack[cnt] == 1) {
                printf("error %d cnt : %d\n", stack[cnt], cnt);
                cnt--;
            }
            else if (bracket == '}' && stack[cnt] == 2) cnt--;
            else
            {
                 flag = 1;
                break ;
               
            } 
        }
        if (cnt == -1 && flag == 0) {
            for (int idx = i; idx < len + i; ++idx)
                printf("%c", cpy[idx]);
            printf("\n");
            ans++;
        }
    }
    return ans;
}


int main()
{
    char *str = "[](){}";
    printf("[%d]\n", solution(str));
}