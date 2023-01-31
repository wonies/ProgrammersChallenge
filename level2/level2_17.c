/* 프로그래머스 챌린지  | 모음 사전 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int aeiou[1000];

int solution(const char *word)
{
    int ca[5] = {781, 156, 31, 6, 1};
    int ans = 0;
    int len = strlen(word);
    aeiou['A'] = 0;
    aeiou['E'] = 1;
    aeiou['I'] = 2;
    aeiou['O'] = 3;
    aeiou['U'] = 4;
    
    int i=0;
    while (word[i])
    {
        if (i>=len)
            break;
        ans += 1 + aeiou[word[i]] * ca[i];
        i++;
    }
    return ans;
    
}