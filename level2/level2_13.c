/* 프로그래머스 챌린지  | 스킬 트리 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int ans = 0;
    int len = strlen(skill);
    int alpha[26] = {0, };
    
    for (int i=0; i<len; i++)
        alpha[skill[i] - 'A'] += (i + 1);
    for (int i=0; i<skill_trees_len; i++)
    {
        int j = 0;
        int cnt = 1;
        while (skill_trees[i][j])
        {
            int temp = alpha[skill_trees[i][j] - 'A'];
            if (temp != 0)
            {
                if (cnt != temp)
                {
                    cnt = -1;
                    break ; 
                }
                else
                    cnt++;
            }
            j++;           
        }
        if (cnt > 0)
            ans++;
    }
    return ans;
}