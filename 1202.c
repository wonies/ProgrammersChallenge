#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

char digit[10][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
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
            if (memcmp(&s[i], digit[j], strlen(digit[j]))==0)
                ans = (ans * 10) + j;
        }
    }
    return ans;
}