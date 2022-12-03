/* 프로그래머스 챌린지  |  숫자 문자열과 영단어 */

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

char *digit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
"nine"};

int solution(const char *s)
{
    int ans = 0;
    int s_len = strlen(s);
    for(int i=0; i<s_len; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            ans = ans * 10 + (s[i] - '0');
        for (int j=0; j < 10; j++)
        {
            if (!(memcmp(&s[i], digit[j], strlen(digit[j]))))
                ans = (ans * 10) + j;
        }
    }
    return ans;
}