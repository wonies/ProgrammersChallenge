/* 프로그래머스 챌린지  | 오른쪽 괄호 */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char* s) {
    bool ans = false;
    int cnt = 0;

    for(int i=0; i<strlen(s); i++)
    {
        if (cnt < 0)
            return ans;
        if (s[i] == '(')
            cnt++;
        else
            cnt--;
    }
    if (cnt == 0)
        return ans + 1;
    return ans;
}